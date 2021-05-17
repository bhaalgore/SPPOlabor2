#include "javaprintoperatorunit.h"

javaPrintOperatorUnit::javaPrintOperatorUnit( const std::string& text ):
m_text( text )
{

}

std::string javaPrintOperatorUnit::compile( unsigned int level = 0 ) const {
return generateShift( level ) + "System.out.print( " + m_text
+ "\" );\n";
}
