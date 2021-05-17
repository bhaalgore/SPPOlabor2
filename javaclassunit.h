#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H

#include "vector"

#include "bufferclassunit.h"

class javaClassUnit: public bufferClassUnit
{
public:
   javaClassUnit( const std::string& name, Flags type );

   std::string compile( unsigned int level = 0 ) const;

private:
 Flags type_;
};

#endif // JAVACLASSUNIT_H
