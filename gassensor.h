#ifndef GASSENSOR_H
#define GASSENSOR_H
#include <string>


class GasSensor: Sensor
{
public:
    GasSensor(long,bool);
    const std::string& getInformation();
    std::string activate();
};

#endif // GASSENSOR_H
