#ifndef COMPONENT_H
#define COMPONENT_H
#include <string>

class Component
{
public:
    std::string activate() = 0;
    const std::string& getInformation();
protected:
    Component();
    std::string information;
};

#endif // COMPONENT_H
