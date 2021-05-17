#include "cppfactory.h"

std::shared_ptr<bufferClassUnit> cppFactory::createClassUnit(const std::string& name, Flags Type)
{
    return std::make_shared<cppClassUnit>(name);
}

std::shared_ptr<bufferMethodUnit> cppFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<cppMethodUnit>(name, returnType, flags);
}

std::shared_ptr<Unit> cppFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<cppPrintOperatorUnit>(text);
}
