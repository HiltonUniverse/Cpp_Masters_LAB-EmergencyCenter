#ifndef EVACUATION_H
#define EVACUATION_H
#include <string>

class Evacuation: Service
{
public:
    Evacuation();
    std::string triggerService();
};

#endif // EVACUATION_H
