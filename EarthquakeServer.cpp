//
// Created by nicomazz97 on 26/11/16.
//


#include "EarthquakeServer.hpp"

void EarthquakeServer::startServer() {

    //HTTP-server at port 8080 using 1 thread
    //Unless you do more heavy non-threaded processing in the resources,
    //1 thread is usually faster than several threads
    HttpServer server(8080, 1);


    FCMServer::initServer(server);

    thread server_thread([&server]() {
        server.start();
    });

    //Wait for server to start so that the client can connect
    this_thread::sleep_for(chrono::seconds(1));

    syslog(LOG_INFO, "Server started!");

    //Client examples
    boost::thread t(boost::bind(&EarthquakeServer::serverMainLoop, this));
    t.join();

    server_thread.join();
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"

/**
 * Main server loop
 * */
void EarthquakeServer::serverMainLoop() {
    EventProvider dataSource;
    for (;;) {
        boost::this_thread::sleep_for(boost::chrono::seconds{10});
        dataSource.eraseOldEvents();
        thread work_thread([this] {
            this->searchForEventsToNotify();
        });
        work_thread.detach();
    }
}

void EarthquakeServer::searchForEventsToNotify(){
    FirebaseNotificationManager notificationHandler;

    std::vector<Event> newEvents = EventProvider::requestNewEventNotInDB();
    if (newEvents.size() == 0) {
        return;
    }
    syslog(LOG_INFO, "---------------------");
    syslog(LOG_INFO, "%d new Events", (int) newEvents.size());
    for (Event &e: newEvents) {
        EventProvider::persistEvent(e);
        if (TimeUtility::isInLastHour(e.millis))
            notificationHandler.handleEventNotification(e);
    }
}
#pragma clang diagnostic pop
