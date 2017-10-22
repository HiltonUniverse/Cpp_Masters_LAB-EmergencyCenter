#ifndef SMOKESENSOR_H
#define SMOKESENSOR_H

#include <string>

class SmokeSensor: Sensor
{
public:
    SmokeSensor(long,bool);
    const std::string& getInformation();
    std::string activate();
};

#endif // SMOKESENSOR_H
