#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "manager.h"
#include "product.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    db = QSqlDatabase::addDatabase("QMYSQL");

     db.setHostName("10.10.20.56");      // IP 또는 DNS Host name
     db.setPort(3306);
     db.setDatabaseName("coupang"); // DB명
     db.setUserName("aaa");     // 계정 명
     db.setPassword("1234");     // 계정 Password

     if(!db.open())
     {
         std::cout << "연결안됨" << std::endl;
     }
     else
         std::cout << "연결됨" << std::endl;

    ui->setupUi(this);

//    QSqlQuery query;
//    query.exec("select * from DeliveryStatus;");

//    QString order_id, cus_id, status;

//    while(query.next())
//    {
//        order_id = query.value(0).toString();
//        cus_id = query.value(1).toString();
//        status = query.value(2).toString();


//        ui->tableWidget->insertRow(ui->tableWidget->rowCount()); // Row를 추가합니다.
//        int index = ui->tableWidget->rowCount() - 1;
//        ui->tableWidget->setItem(index, 0, new QTableWidgetItem(order_id));
//        ui->tableWidget->setItem(index, 1, new QTableWidgetItem(cus_id));
//        ui->tableWidget->setItem(index, 2, new QTableWidgetItem(status));
//    }

    ui->tableWidget_2->setVisible(false);

    ui->tableWidget_3->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    manager manage;
    manage.setModal(true);
    manage.show();
    manage.exec();


}


void MainWindow::on_pushButton_clicked()
{
//    product search;
//    search.setModal(true);
//    this->hide();
//    search.show();
//    search.exec();


//    ui->lineEdit->setText("");
//    this->show();

    QString keyword = ui->lineEdit->text();

    QSqlQuery query;
    query.exec(QString("SELECT 제품ID, 품명, 가격 FROM `coupang`.ProductDetails WHERE 품명 LIKE '%") + QString(keyword) + QString("%'"));
    QString  code, name, price;



    while(query.next())
    {

        code = query.value(0).toString();
        name = query.value(1).toString();
        price = query.value(2).toString();

        ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount()); // Row를 추가합니다.
        int index = ui->tableWidget_2->rowCount() - 1;
        ui->tableWidget_2->setItem(index, 0, new QTableWidgetItem(code));
        ui->tableWidget_2->setItem(index, 1, new QTableWidgetItem(name));
        ui->tableWidget_2->setItem(index, 2, new QTableWidgetItem(price));
    }
    ui->tableWidget_2->setVisible(true);

}





void MainWindow::on_pushButton_3_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}


void MainWindow::on_tableWidget_2_cellClicked(int row, int column)
{
    qDebug()<<row;
    qDebug()<<column;
    QString code = ui->tableWidget_2->item(row,0)->text();
    qDebug()<<code;
    //    keywordID = ui->tableWidget_2->item(row,0)->text();
    qDebug()<<code;
    QSqlQuery query;

    query.exec(QString("SELECT 가격 FROM `coupang`.ProductDetails WHERE 제품ID=" + code));

    QString price;
    query.next();
    price = query.value(0).toString();
qDebug()<<price;
    ui->lineEdit_2->setText(price);

    ui->tabWidget->setCurrentIndex(4);

}


void MainWindow::on_pushButton_4_clicked()
{
    QString keyword = ui->searchWord_2->text();

    QSqlQuery query;
    query.exec(QString("SELECT * FROM `coupang`.DeliveryStatus WHERE 고객ID = '") + QString(keyword) + QString("'"));
    QString order, name, status;

    while(query.next())
    {

        order = query.value(0).toString();
        name = query.value(1).toString();
        status = query.value(2).toString();

        ui->tableWidget->insertRow(ui->tableWidget->rowCount()); // Row를 추가합니다.
        int index = ui->tableWidget->rowCount() - 1;
        ui->tableWidget->setItem(index, 0, new QTableWidgetItem(order));
        ui->tableWidget->setItem(index, 1, new QTableWidgetItem(name));
        ui->tableWidget->setItem(index, 2, new QTableWidgetItem(status));
    }

}


void MainWindow::on_beauty_clicked()
{

    QSqlQuery query;
    query.exec(QString("SELECT 제품ID, 품명, 가격 FROM `coupang`.ProductDetails WHERE 대분류 = '뷰티'"));
    QString  code, name, price;

    while(query.next())
    {

        code = query.value(0).toString();
        name = query.value(1).toString();
        price = query.value(2).toString();

        ui->tableWidget_3->insertRow(ui->tableWidget_3->rowCount()); // Row를 추가합니다.
        int index = ui->tableWidget_3->rowCount() - 1;
        ui->tableWidget_3->setItem(index, 0, new QTableWidgetItem(code));
        ui->tableWidget_3->setItem(index, 1, new QTableWidgetItem(name));
        ui->tableWidget_3->setItem(index, 2, new QTableWidgetItem(price));
    }
    ui->tableWidget_3->setVisible(true);
}


void MainWindow::on_pushButton_5_clicked()
{
     ui->tabWidget->setCurrentIndex(0);

}

