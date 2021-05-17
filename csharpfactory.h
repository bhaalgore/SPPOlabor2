#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H

#include "InterfaceFactory.h"

#include "csharpclassunit.h"
#include "csharpmethodunit.h"
#include "csharpprintoperatorunit.h"

class csharpFactory : public InterfaceFactory
{
  public:
   csharpFactory() = default;

        std::shared_ptr<bufferClassUnit> createClassUnit(const std::string& name, Flags flags) override;

        std::shared_ptr<bufferMethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override;

        std::shared_ptr<Unit> createPrintOperatorUnit(const std::string& text) override;
};


#endif // CSHARPFACTORY_H
