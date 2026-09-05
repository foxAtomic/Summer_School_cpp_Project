#ifndef HUMAN_H
#define HUMAN_H
#include <QString>
#include "IdentityType.h"

class Human {
private:
    QString Name;                 // 姓名
    QString ID;                   // 一卡通号
    int Byear, Bmon, Bday;        // 出生 年/月/日
    IdentityType type;            // 身份类别（学生/教师/职工）
    is_Administration adm;        // 管理权限（管理员/普通）

public:
    Human(QString n = "#", QString id = "999999999",
          int y = 2026, int m = 9, int d = 3,
          is_Administration adm = is_Administration::No,
          IdentityType type = IdentityType::Student);

    QString GetName() const;
    QString GetId() const;
    QString GetBirthday() const;
    int GetBornYear() const;
    int GetBornMonth() const;
    int GetBornDay() const;

    void SetBirthday(int y = 2026, int m = 9, int d = 3);
    void SetName(QString n);
    void SetId(QString id);

    // 修改管理权限：只有当传入的 id 和本人卡号一致时，才把权限改为 adm。
    // 成功返回 true，否则 false。
    bool Setadmpower(QString id, is_Administration adm = is_Administration::No);
    // 查询当前管理权限
    is_Administration GetAdm() const;

    virtual ~Human() = default;
};

#endif // HUMAN_H
