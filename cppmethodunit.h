#ifndef METHODUNIT_H
#define METHODUNIT_H

#include <iostream>
#include <vector>

#include "Unit.h"

class cppMethodUnit : public Unit {
public:
 enum Modifier {
 STATIC = 1,
 CONST = 1 << 1,
 VIRTUAL = 1 << 2
 };
public:
 cppMethodUnit( const std::string& name, const std::string& returnType, Flags
flags );

 void add( const std::shared_ptr< Unit >& unit, Flags /* flags */);

 std::string compile( unsigned int level = 0 ) const {
 std::string result = generateShift( level );
 if( m_flags & STATIC ) {
 result += "static ";
 } else if( m_flags & VIRTUAL ) {
 result += "virtual ";
 }
 result += m_returnType + " ";
 result += m_name + "()";
 if( m_flags & CONST ) {
 result += " const";
 }
 result += " {\n";
 for( const auto& b : m_body ) {
 result += b->compile( level + 1 );
 }
 result += generateShift( level ) + "}\n";
 return result;
 }


private:
 std::string m_name;
 std::string m_returnType;
 Flags m_flags;
 std::vector< std::shared_ptr< Unit > > m_body;
};

#endif // METHODUNIT_H
