#include "teacher.h"

Teacher::Teacher(QString n, QString id, int y, int m, int d,
                 is_Administration adm, IdentityType t)
    : Human(n, id, y, m, d, adm, t)
{
}
