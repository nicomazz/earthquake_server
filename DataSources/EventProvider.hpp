#ifndef EVENT_DATA_SOURCE_HPP
#define    EVENT_DATA_SOURCE_HPP


#include <vector>
#include <memory>
#include "Models/Event/Event.hpp"
#include <iostream>
#include <sqlite3.h>
#include "DataSources/EventsWebProvider/INGVDataSource.hpp"
#include "Models/Event/Event-odb.hpp"

#include "Database.hpp"

class EventProvider {
public:
    EventProvider() {}

    std::vector<Event> requestEventWebUpdate();

    std::vector<Event> requestNewEventNotInDB();

    std::vector<Event> requestEventFromDB();

    void persistEvent(Event &e, bool checkAlreadyPresent = false);

    Event getEvent(long id);

    void deleteEvent(Event e);

    bool isEventPresent(long id);

};

#endif	/* EVENT_DATA_SOURCE_HPP */
