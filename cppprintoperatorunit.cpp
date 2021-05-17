#include "cppprintoperatorunit.h"

cppPrintOperatorUnit::cppPrintOperatorUnit( const std::string& text ):
m_text( text )
{

}

std::string cppPrintOperatorUnit::compile( unsigned int level = 0 ) const {
return generateShift( level ) + "printf( \"" + m_text
+ "\" );\n";
}

