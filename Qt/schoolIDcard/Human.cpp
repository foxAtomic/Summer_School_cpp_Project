#include "Human.h"

// 构造函数：用“成员初始化列表”给所有成员赋值，避免未初始化。
Human::Human(QString n, QString id, int y, int m, int d,
             is_Administration adm, IdentityType type)
    : Name(n), ID(id), Byear(y), Bmon(m), Bday(d),
      type(type), adm(adm)
{
}

QString Human::GetName() const {
    return Name;
}
QString Human::GetId() const {
    return ID;
}
QString Human::GetBirthday() const {
    return QString::number(Byear) + "年" + QString::number(Bmon) + "月" + QString::number(Bday) + "日";
}
int Human::GetBornYear() const {
    return Byear;
}
int Human::GetBornMonth() const {
    return Bmon;
}
int Human::GetBornDay() const {
    return Bday;
}

void Human::SetBirthday(int y, int m, int d) {
    Byear = y;
    Bmon = m;
    Bday = d;
}
void Human::SetName(QString n) {
    Name = n;
}
void Human::SetId(QString id) {
    ID = id;
}

// 修改管理权限：id 与本人卡号相同才允许修改。
bool Human::Setadmpower(QString id, is_Administration adm) {
    if (id == this->ID) {
        this->adm = adm;
        return true;
    }
    return false;
}

is_Administration Human::GetAdm() const {
    return this->adm;
}
