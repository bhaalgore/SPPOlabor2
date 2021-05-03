#include "csharpmethodunit.h"

csharpMethodUnit::csharpMethodUnit(const std::string& name, const std::string& returnType, Unit::Flags flags ) :
                              m_name( name ), m_returnType( returnType ), m_flags( flags )
{

}

void csharpMethodUnit::add( const std::shared_ptr< Unit >& unit, Unit::Flags flags = 0) {
m_body.push_back( unit );
}

/*std::string csharpMethodUnit::compile( unsigned int level = 0 ) const
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
 }*/
