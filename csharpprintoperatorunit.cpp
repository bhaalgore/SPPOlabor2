#include "csharpprintoperatorunit.h"

csharpPrintOperatorUnit::csharpPrintOperatorUnit( const std::string& text ):
m_text( text )
{

}

std::string csharpPrintOperatorUnit::compile( unsigned int level = 0 ) const {
return generateShift( level ) + "Console.WriteLine( " + m_text
+ " );\n";
}

