#include "manager.h"
#include "ui_manager.h"
#include <iostream>


manager::manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manager)
{
    ui->setupUi(this);


    QSqlQuery query;
    query.exec("select * from ProductDetails;");

    QString h_class, m_class, s_class, name, price, code;

    while(query.next())
    {
        h_class = query.value(0).toString();
        m_class = query.value(1).toString();
        s_class = query.value(2).toString();
        name = query.value(3).toString();
        price = query.value(4).toString();
        code = query.value(5).toString();

        ui->tableWidget->insertRow(ui->tableWidget->rowCount()); // Row를 추가합니다.
        int index = ui->tableWidget->rowCount() - 1;
        ui->tableWidget->setItem(index, 0, new QTableWidgetItem(h_class));
        ui->tableWidget->setItem(index, 1, new QTableWidgetItem(m_class));
        ui->tableWidget->setItem(index, 2, new QTableWidgetItem(s_class));
        ui->tableWidget->setItem(index, 3, new QTableWidgetItem(name));
        ui->tableWidget->setItem(index, 4, new QTableWidgetItem(price));
        ui->tableWidget->setItem(index, 5, new QTableWidgetItem(code));
    }

}

manager::~manager()
{
    delete ui;
}
