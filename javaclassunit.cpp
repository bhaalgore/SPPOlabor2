#include "javaclassunit.h"


javaClassUnit::javaClassUnit( const std::string& name, Flags type ) : bufferClassUnit( name ) {

 }

std::string javaClassUnit::compile( unsigned int level) const {
std::string result="";
if( type_ & PUBLIC ) {
result += "public ";
}else
if( type_ & PROTECTED ) {
result += "protected ";
}else
if( type_ & PRIVATE ) {
 result += "private ";
}
if( type_ & FINAL ) {
result += "final ";
}else
if( type_ & ABSTRACT ) {
result += "abstract ";
}
result = generateShift( level ) + "class " + m_name + " {\n";

for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i ) {
if( m_fields[ 1<<i ].empty() ) {
continue;
}
result += ACCESS_MODIFIERS[ i ] + ":\n";
for( const auto& f : m_fields[ 1<<i ] ) {
result += f->compile( level + 1 );
}
result += "\n";
}
result += generateShift( level ) + "};\n";
return result;
}


