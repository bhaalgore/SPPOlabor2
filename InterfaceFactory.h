#ifndef INTERFACEFACTORY_H
#define INTERFACEFACTORY_H

#include "bufferclassunit.h"
#include "buffermethodunit.h"
#include "unit.h"

class InterfaceFactory
{
 public:
    InterfaceFactory() = default;
       using Flags = unsigned int;
       virtual std::shared_ptr<bufferClassUnit> createClassUnit(const std::string& name, Flags flags) = 0;
       virtual std::shared_ptr<bufferMethodUnit> createMethodUnit(const std::string& name,
                                  const std::string& returnType, Flags flags) = 0;
       virtual std::shared_ptr<Unit> createPrintOperatorUnit(const std::string& text) = 0;

       virtual ~InterfaceFactory() = default;

};

#endif // INTERFACEFACTORY_H
