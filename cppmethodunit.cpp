#include "cppmethodunit.h"

cppMethodUnit::cppMethodUnit(const std::string& name, const std::string& returnType, Flags flags ) :
                              m_name( name ), m_returnType( returnType ), m_flags( flags )
{

}

void cppMethodUnit::add( const std::shared_ptr< Unit >& unit, Flags /* flags */= 0) {
m_body.push_back( unit );
}


