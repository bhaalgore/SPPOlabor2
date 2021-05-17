#ifndef CSHARPMETHODUNIT_H
#define CSHARPMETHODUNIT_H

#include <iostream>
#include <vector>

#include "buffermethodunit.h"

class csharpMethodUnit: public bufferMethodUnit {

public:
 csharpMethodUnit( const std::string& name, const std::string& returnType, Flags
flags );

 std::string compile( unsigned int level ) const;

};


#endif // CSHARPMETHODUNIT_H
