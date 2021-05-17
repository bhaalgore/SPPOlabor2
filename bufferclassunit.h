#ifndef BUFFERCLASSUNIT_H
#define BUFFERCLASSUNIT_H

#include <vector>

#include "unit.h"

class bufferClassUnit: public Unit
{
public:
    enum AccessModifier{
        PUBLIC=1,
        PROTECTED=1<<1,
        PRIVATE=1<<2,
        PRIVATE_PROTECTED=1<<3,
        INTERNAL=1<<4,
        PROTECTED_INTERNAL=1<<5,
        FINAL=1<<6,
        ABSTRACT=1<<7
    };
    static const std::vector<std::string> ACCESS_MODIFIERS;
public:
    explicit bufferClassUnit( const std::string& name);
      void add(const std::shared_ptr<Unit>& unit, Flags flags);
      virtual std::string compile(unsigned int level = 0) const=0;
      virtual ~bufferClassUnit()=default;
  protected:
      std::string m_name;
      using Fields = std::vector<std::shared_ptr<Unit>>;
      std::vector<Fields> m_fields;
};

#endif // BUFFERCLASSUNIT_H

