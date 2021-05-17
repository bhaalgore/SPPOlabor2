#include "javafactory.h"



std::shared_ptr<bufferClassUnit> javaFactory::createClassUnit(const std::string& name, Flags Type)
{
    return std::make_shared<javaClassUnit>(name, Type);
}

std::shared_ptr<bufferMethodUnit> javaFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<javaMethodUnit>(name, returnType, flags);
}

std::shared_ptr<Unit> javaFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<javaPrintOperatorUnit>(text);
}
