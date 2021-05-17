#ifndef METHODUNIT_H
#define METHODUNIT_H

#include <iostream>
#include <vector>

#include "buffermethodunit.h"

class cppMethodUnit : public bufferMethodUnit {
public:

public:
 cppMethodUnit( const std::string& name, const std::string& returnType, Flags
flags );

 std::string compile( unsigned int level ) const;
};

#endif // METHODUNIT_H
