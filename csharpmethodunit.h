#ifndef CSHARPMETHODUNIT_H
#define CSHARPMETHODUNIT_H

#include <iostream>
#include <vector>

#include "unit.h"

class csharpMethodUnit
{
public:
 enum Modifier {
 STATIC = 1,
 CONST = 1 << 1
 };

public:
 csharpMethodUnit( const std::string& name, const std::string& returnType, Unit::Flags
flags );

 void add( const std::shared_ptr< Unit >& unit, Unit::Flags flags );

 std::string compile( unsigned int level ) const;

private:
 std::string m_name;
 std::string m_returnType;
 Unit::Flags m_flags;
 std::vector< std::shared_ptr< Unit > > m_body;
};


#endif // CSHARPMETHODUNIT_H
