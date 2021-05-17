#ifndef CLASSUNIT_H
#define CLASSUNIT_H

#include <iostream>
#include <vector>
#include <memory>

#include "bufferclassunit.h"

class cppClassUnit : public bufferClassUnit
{
public:

 cppClassUnit( const std::string& name );

 std::string compile( unsigned int level = 0 ) const;

};


#endif // CLASSUNIT_H
