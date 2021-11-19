#ifndef MANAGER_H
#define MANAGER_H

#include <QtSql/QtSql>
#include <QtSql/QSqlDriver>
#include <QDialog>

namespace Ui {
class manager;
}

class manager : public QDialog
{
    Q_OBJECT

public:
    explicit manager(QWidget *parent = nullptr);
    ~manager();

private:
    Ui::manager *ui;
    QSqlDatabase db;
};

#endif // MANAGER_H
