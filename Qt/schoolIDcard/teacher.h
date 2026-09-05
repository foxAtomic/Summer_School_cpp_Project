#ifndef TEACHER_H
#define TEACHER_H

#include "Human.h"

class Teacher : public Human
{
public:
    Teacher(QString n = "#", QString id = "999999999",
            int y = 2026, int m = 9, int d = 3,
            is_Administration adm = is_Administration::No,
            IdentityType t = IdentityType::Teacher);
};

#endif // TEACHER_H
