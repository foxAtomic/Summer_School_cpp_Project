#ifndef ADMIN_H
#define ADMIN_H

#include "Human.h"

class Admin : public Human
{
public:
    Admin(QString n = "#", QString id = "999999999",
          int y = 2026, int m = 9, int d = 3,
          is_Administration adm = is_Administration::Yes,
          IdentityType t = IdentityType::Staff);
};

#endif // ADMIN_H
