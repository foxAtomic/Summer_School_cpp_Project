#include "student.h"

Student::Student(QString n, QString id, int y, int m, int d, StudentLevel l, int grd, int yts)
    : Human(n, id, y, m, d), level(l), Grade(grd), YeartoSchool(yts)
{
}

Student::~Student()
{
}

void Student::SetYeartoSchool(int yts) {
    YeartoSchool = yts;
}
void Student::SetGrade(int grd) {
    Grade = grd;
}
int Student::ShowYeartoSchool() {
    return YeartoSchool;
}
int Student::ShowGrade() {
    return Grade;
}
StudentLevel Student::ShowLevel() {
    return level;
}
