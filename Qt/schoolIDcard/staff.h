#ifndef STAFF_H
#define STAFF_H

#include "Human.h"

class Staff : public Human
{
public:
    Staff(QString n = "#", QString id = "999999999",
          int y = 2026, int m = 9, int d = 3,
          is_Administration adm = is_Administration::No,
          IdentityType t = IdentityType::Staff);
};

#endif // STAFF_H
