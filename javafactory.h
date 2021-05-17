#ifndef JAVAFACTORY_H
#define JAVAFACTORY_H

#include "InterfaceFactory.h"

#include "javaclassunit.h"
#include "javamethodunit.h"
#include "javaprintoperatorunit.h"

class javaFactory : public InterfaceFactory
{
  public:
   javaFactory() = default;

        std::shared_ptr<bufferClassUnit> createClassUnit(const std::string& name, Flags flags) override;

        std::shared_ptr<bufferMethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override;

        std::shared_ptr<Unit> createPrintOperatorUnit(const std::string& text) override;
};

#endif // JAVAFACTORY_H
