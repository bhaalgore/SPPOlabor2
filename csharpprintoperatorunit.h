#ifndef CSHARPPRINTOPERATORUNIT_H
#define CSHARPPRINTOPERATORUNIT_H

#include <iostream>

#include "unit.h"

class csharpPrintOperatorUnit: public Unit
{
public:
    explicit csharpPrintOperatorUnit( const std::string& text );
    std::string compile( unsigned int level ) const;
   private:
    std::string m_text;
};

#endif // CSHARPPRINTOPERATORUNIT_H
