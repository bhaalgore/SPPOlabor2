#ifndef CLASSUNIT_H
#define CLASSUNIT_H

#include <iostream>
#include <vector>
#include <memory>

#include "Unit.h"

class cppClassUnit : public Unit
{
public:
 enum AccessModifier {
 PUBLIC,
 PROTECTED,
 PRIVATE
 };
 static const std::vector< std::string > ACCESS_MODIFIERS;
public:

 explicit cppClassUnit( const std::string& name );


 void add( const std::shared_ptr< Unit >& unit, Flags flags );


 std::string compile( unsigned int level = 0 ) const;


private:
 std::string m_name;
 using Fields = std::vector< std::shared_ptr< Unit > >;
 std::vector< Fields > m_fields;
};
const std::vector< std::string > cppClassUnit::ACCESS_MODIFIERS = { "public",
"protected", "private" };

#endif // CLASSUNIT_H
