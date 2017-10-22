#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H
#include <string>


class MotionSensor: Sensor
{
public:
    MotionSensor(long,bool);
    const std::string& getInformation();
    std::string activate();
};

#endif // MOTIONSENSOR_H
