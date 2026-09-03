#ifndef IDENTITYTYPE_H
#define IDENTITYTYPE_H

#include <QString>
enum class IdentityType {
    Student = 0, Teacher = 1, Staff = 2
};
enum class StudentLevel {
    Undergra = 0, Master = 1, Doctor = 2
};
enum class is_Administration {
    Yes = 1,
    No = 0
};

#endif // IDENTITYTYPE_H
