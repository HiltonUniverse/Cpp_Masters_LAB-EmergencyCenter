#ifndef SENSOR_H
#define SENSOR_H
#include <vector>
#include <string>

class Sensor: Component
{
public:
    void activateSensor();
    void deactivateSensor();
    long getSensorID();
    std::string getSensorType();
    bool getsSensorStatus();
    const std::string& getInformation();
    //std::ostream& operator<<(std::ostream&,const Sensor&);
    void addService(Service::std::shared_ptr);
private:
    long sensorID = 0;
    bool isActive =false;
    std::vector <Service::std::shared_ptr> serviceList;
protected:
    Sensor(long,bool);
};

#endif // SENSOR_H
