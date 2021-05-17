#ifndef FACTORY_H
#define FACTORY_H

#include "InterfaceFactory.h"

#include "cppclassunit.h"
#include "cppmethodunit.h"
#include "cppprintoperatorunit.h"

class cppFactory : public InterfaceFactory
{
  public:
   cppFactory() = default;

        std::shared_ptr<bufferClassUnit> createClassUnit(const std::string& name, Flags flags);

        std::shared_ptr<bufferMethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags);

        std::shared_ptr<Unit> createPrintOperatorUnit(const std::string& text);
};

#endif // FACTORY_H
