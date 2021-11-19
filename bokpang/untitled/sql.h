#ifndef SQL_H
#define SQL_H

#include <QtSql/QtSql>
#include <QtSql/QSqlDriver>
#include <iostream>

class sql
{
public:
    sql();
private:
    QSqlDatabase db;
};

#endif // SQL_H
