#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QtSql>
#include <QtSql/QSqlDriver>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_pushButton_3_clicked();

    void on_tableWidget_2_cellClicked(int row, int column);

    void on_pushButton_4_clicked();

    void on_beauty_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
