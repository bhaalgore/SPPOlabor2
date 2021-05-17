#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H

#include <iostream>

#include "unit.h"

class cppPrintOperatorUnit : public Unit {
public:
 explicit cppPrintOperatorUnit( const std::string& text );
 std::string compile( unsigned int level ) const;
private:
 std::string m_text;
};

#endif // PRINTOPERATORUNIT_H
