#include "csharpmethodunit.h"

csharpMethodUnit::csharpMethodUnit(const std::string& name, const std::string& returnType, Unit::Flags flags ) :bufferMethodUnit( name , returnType, flags )
{

}

std::string csharpMethodUnit::compile( unsigned int level = 0 ) const
{
 std::string result = generateShift( level );
 if( m_flags & STATIC ) {
 result += "static ";
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
