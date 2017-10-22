#ifndef EMERGENCYCENTER_H
#define EMERGENCYCENTER_H
#include <vector>
#include <stdlib.h>

class EmergencyCenter
{
public:
    void activateSensor(Component::std::shared_ptr);
    void deactivateSensor(Component::std::shared_ptr);
    void testSenosrs(Component::std::shared_ptr);
    static EmergencyCenter getEmergencyCenterInstance();

private :
   EmergencyCenter();
   static EmergencyCenter EmergencyCenterInstance = null;
   std::vector<Componenet::std::shared_ptr> componentList = null;

};

#endif // EMERGENCYCENTER_H
