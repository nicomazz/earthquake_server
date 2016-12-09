//
// Created by nicomazz97 on 20/11/16.
//

#ifndef SIMPLE_WEB_SERVER_USER_H
#define SIMPLE_WEB_SERVER_USER_H

#include <odb/core.hxx>
#include <string>
//#include "UserBuilder.hpp"


#pragma db object

class User {
public:
    User() {
        id = -1;
        lastActivity = 0;
    }

#pragma db id auto
    long id;
    std::string firebaseID; // corrispondente al firebase id
    double lat;
    double lng;

    double minMagPreference;
    double maxDistancePreference;
    long minMillisNotificationDelay;

    long lastNotificationMillis;

    bool receiveRealTimeNotification;

    //last millis in who user send report with accelerometer
    long lastActivity;

    long lastModify;

    std::string secretKey; // key to update the information or send the reports, autogenerated on user creation

    bool hasId() { return id >= 0; }

};


#endif //SIMPLE_WEB_SERVER_USER_H
