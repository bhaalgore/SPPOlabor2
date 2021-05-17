#include <QCoreApplication>

#include <iostream>

#include "unit.h"
#include "InterfaceFactory.h"
#include "bufferclassunit.h"
#include "buffermethodunit.h"


#include "cppprintoperatorunit.h"
#include "cppfactory.h"

#include "csharpprintoperatorunit.h"
#include "csharpfactory.h"

#include "javaprintoperatorunit.h"
#include "javafactory.h"

std::string generateProgram(InterfaceFactory* Factory) {

        auto myClass = Factory->createClassUnit("myClass", bufferClassUnit::PRIVATE|bufferClassUnit::ABSTRACT);

        myClass->add(Factory->createMethodUnit("testFunc1", "void", 0), bufferClassUnit::PUBLIC);

        myClass->add(Factory->createMethodUnit("testFunc2", "void", bufferMethodUnit::STATIC), bufferClassUnit::PRIVATE);

        myClass->add(Factory->createMethodUnit("testFunc3", "void", bufferMethodUnit::VIRTUAL | bufferMethodUnit::CONST), bufferClassUnit::PUBLIC);

        myClass->add(Factory->createMethodUnit("testFunc6", "void",bufferMethodUnit::VIRTUAL | bufferMethodUnit::CONST),bufferClassUnit::INTERNAL);

        myClass->add(Factory->createMethodUnit("testFunc5", "void",bufferMethodUnit::VIRTUAL | bufferMethodUnit::CONST),bufferClassUnit::PROTECTED_INTERNAL);

        auto method = Factory->createMethodUnit("testFunc4", "void", bufferMethodUnit::STATIC);

        myClass->add(Factory->createMethodUnit("testFunc7", "void",bufferMethodUnit::ABSTRACT), bufferClassUnit::PRIVATE);

        myClass->add(Factory->createMethodUnit("testFunc888", "void", bufferMethodUnit::CONST), bufferClassUnit::PRIVATE_PROTECTED);

        method->add(Factory->createPrintOperatorUnit(R"(Hello,world!\n)"));

        myClass->add(method, bufferClassUnit::PROTECTED );

        return myClass->compile();
}

int main() {
 cppFactory cpp;
 csharpFactory csharp;
 javaFactory java;

 std::cout << generateProgram(&cpp) << std::endl;
 std::cout <<"--------------------------------------------------------------------------------------------------------------"<<std::endl;
 std::cout << generateProgram(&csharp) << std::endl;
 std::cout <<"--------------------------------------------------------------------------------------------------------------"<<std::endl;
 std::cout << generateProgram(&java) << std::endl;


 return 0;
}
