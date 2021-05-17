#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H

#include <vector>

#include "buffermethodunit.h"

class javaMethodUnit: public bufferMethodUnit
{
public:
    javaMethodUnit( const std::string& name, const std::string& returnType, Flags
   flags );

    std::string compile( unsigned int level ) const;

};

#endif // JAVAMETHODUNIT_H
