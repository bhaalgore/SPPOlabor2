#ifndef CSHARPCLASSUNIT_H
#define CSHARPCLASSUNIT_H

#include <vector>

#include "bufferclassunit.h"

class csharpClassUnit: public bufferClassUnit
{
public:
 csharpClassUnit( const std::string& name, Flags flags);

 std::string compile( unsigned int level = 0 ) const;

private:
 Flags type_;
};

#endif // CSHARPCLASSUNIT_H
