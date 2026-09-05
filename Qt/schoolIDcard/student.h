#ifndef STUDENT_H
#define STUDENT_H

#include "Human.h"

class Student : public Human
{
private:
    StudentLevel level;
    int Grade;
    int YeartoSchool;//入学年份
public:
    Student(QString n = "#", QString id = "999999999",
            int y = 2026, int m = 9, int d = 3,
            StudentLevel le = StudentLevel::Undergra,
            int grd = 1, int yts = 2026);
    ~Student();
    StudentLevel ShowLevel();
    void SetYeartoSchool(int yts);
    int ShowYeartoSchool();
    void SetGrade(int grd);//可以手动修改年级
    int ShowGrade();

protected:

};

#endif // STUDENT_H
