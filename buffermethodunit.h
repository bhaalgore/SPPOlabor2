#ifndef BUFFERMETHODUNIT_H
#define BUFFERMETHODUNIT_H

#include <vector>

#include "unit.h"

class bufferMethodUnit: public Unit
{
public:
    enum Modifier {
        STATIC = 1,
        CONST = 1 << 1,
        VIRTUAL = 1 << 2,
        FINAL = 1 << 3,
        ABSTRACT = 1 << 4
    };
public:
      bufferMethodUnit(const std::string& name, const std::string& returnType, Flags flags);
      void add( const std::shared_ptr< Unit >& unit, Flags flags = 0 );
      virtual std::string compile( unsigned int level = 0 ) const=0;

protected:
      std::string m_name;
      std::string m_returnType;
      Flags m_flags;
      std::vector<std::shared_ptr<Unit>> m_body;
};

#endif // BUFFERMETHODUNIT_H
