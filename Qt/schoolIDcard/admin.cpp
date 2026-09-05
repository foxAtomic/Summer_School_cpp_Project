#include "admin.h"

Admin::Admin(QString n, QString id, int y, int m, int d
            , is_Administration adm, IdentityType t)
    : Human(n, id, y, m, d, adm, t) {
}
