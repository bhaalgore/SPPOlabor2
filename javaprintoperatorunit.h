#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H

#include "unit.h"

class javaPrintOperatorUnit: public Unit
{
  public:
  explicit javaPrintOperatorUnit( const std::string& text );
  std::string compile( unsigned int level ) const;
private:
  std::string m_text;

};

#endif // JAVAPRINTOPERATORUNIT_H
