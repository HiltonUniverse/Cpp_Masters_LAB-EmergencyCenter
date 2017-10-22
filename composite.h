#ifndef COMPOSITE_H
#define COMPOSITE_H
#include <string>
#include <vector>

class Composite: Component
{
public:
    Composite(std::string);
    std::string getCompositeName();
    void addCOmponent(Component::std::shared_ptr&);
    std::string getInformation();
    void activate();
    long getCompositeID();

  private:
    std::vector<Component::std::shared_ptr> componentList;
    std::string comopositeName;
    long compostieID;
};

#endif // COMPOSITE_H
