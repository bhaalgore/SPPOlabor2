#include "csharpfactory.h"

std::shared_ptr<bufferClassUnit> csharpFactory::createClassUnit(const std::string& name, Flags Type)
{
    return std::make_shared<csharpClassUnit>(name, Type);
}

std::shared_ptr<bufferMethodUnit> csharpFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<csharpMethodUnit>(name, returnType, flags);
}

std::shared_ptr<Unit> csharpFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<csharpPrintOperatorUnit>(text);
}
