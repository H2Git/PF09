/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *HOME;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *CATEGORY;
    QLabel *label_2;
    QPushButton *fashion;
    QPushButton *kids;
    QPushButton *kitchen;
    QPushButton *home_interior;
    QPushButton *sports;
    QPushButton *book;
    QPushButton *office;
    QPushButton *health;
    QPushButton *beauty;
    QPushButton *food;
    QPushButton *daily;
    QPushButton *digital;
    QPushButton *car;
    QPushButton *toy;
    QPushButton *pet;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QTableWidget *tableWidget_3;
    QWidget *SEARCH;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableWidget *tableWidget_2;
    QWidget *DELIVERY;
    QPushButton *pushButton_4;
    QLineEdit *searchWord_2;
    QTableWidget *tableWidget;
    QWidget *tab;
    QLineEdit *address;
    QLabel *label_23;
    QLabel *label_18;
    QLineEdit *payment;
    QLabel *label_17;
    QLabel *label_20;
    QLabel *label_16;
    QPushButton *pushButton_5;
    QLabel *label_21;
    QLabel *label_19;
    QLabel *label_22;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(665, 692);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(90, 30, 441, 611));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setIconSize(QSize(20, 20));
        tabWidget->setElideMode(Qt::ElideNone);
        HOME = new QWidget();
        HOME->setObjectName(QString::fromUtf8("HOME"));
        label = new QLabel(HOME);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 441, 571));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/cou1.jpg);"));
        pushButton_2 = new QPushButton(HOME);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(81, 2, 31, 25));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/manager.png);"));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(HOME);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 34, 281, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/search1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        label_4 = new QLabel(HOME);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(178, 4, 41, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Condensed")});
        font.setPointSize(14);
        font.setBold(true);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(245, 121, 0);\n"
"color: rgb(32, 74, 135);\n"
"background-color: rgb(238, 238, 236);"));
        label_5 = new QLabel(HOME);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(216, 4, 61, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(237, 212, 0);\n"
"color: rgb(114, 159, 207);\n"
"background-color: rgb(238, 238, 236);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(HOME, icon1, QString());
        CATEGORY = new QWidget();
        CATEGORY->setObjectName(QString::fromUtf8("CATEGORY"));
        label_2 = new QLabel(CATEGORY);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 441, 581));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/cou2.jpg);"));
        fashion = new QPushButton(CATEGORY);
        fashion->setObjectName(QString::fromUtf8("fashion"));
        fashion->setGeometry(QRect(102, 66, 89, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Abyssinica SIL")});
        font1.setPointSize(9);
        fashion->setFont(font1);
        fashion->setStyleSheet(QString::fromUtf8(""));
        fashion->setFlat(true);
        kids = new QPushButton(CATEGORY);
        kids->setObjectName(QString::fromUtf8("kids"));
        kids->setGeometry(QRect(102, 98, 89, 25));
        kids->setFont(font1);
        kids->setFlat(true);
        kitchen = new QPushButton(CATEGORY);
        kitchen->setObjectName(QString::fromUtf8("kitchen"));
        kitchen->setGeometry(QRect(102, 129, 89, 25));
        kitchen->setFont(font1);
        kitchen->setFlat(true);
        home_interior = new QPushButton(CATEGORY);
        home_interior->setObjectName(QString::fromUtf8("home_interior"));
        home_interior->setGeometry(QRect(102, 160, 89, 25));
        home_interior->setFont(font1);
        home_interior->setFlat(true);
        sports = new QPushButton(CATEGORY);
        sports->setObjectName(QString::fromUtf8("sports"));
        sports->setGeometry(QRect(102, 189, 89, 25));
        sports->setFont(font1);
        sports->setFlat(true);
        book = new QPushButton(CATEGORY);
        book->setObjectName(QString::fromUtf8("book"));
        book->setGeometry(QRect(102, 220, 89, 25));
        book->setFont(font1);
        book->setFlat(true);
        office = new QPushButton(CATEGORY);
        office->setObjectName(QString::fromUtf8("office"));
        office->setGeometry(QRect(102, 249, 89, 25));
        office->setFont(font1);
        office->setFlat(true);
        health = new QPushButton(CATEGORY);
        health->setObjectName(QString::fromUtf8("health"));
        health->setGeometry(QRect(102, 280, 89, 25));
        health->setFont(font1);
        health->setFlat(true);
        beauty = new QPushButton(CATEGORY);
        beauty->setObjectName(QString::fromUtf8("beauty"));
        beauty->setGeometry(QRect(254, 66, 89, 25));
        beauty->setFont(font1);
        beauty->setFlat(true);
        food = new QPushButton(CATEGORY);
        food->setObjectName(QString::fromUtf8("food"));
        food->setGeometry(QRect(254, 97, 89, 25));
        food->setFont(font1);
        food->setFlat(true);
        daily = new QPushButton(CATEGORY);
        daily->setObjectName(QString::fromUtf8("daily"));
        daily->setGeometry(QRect(254, 128, 89, 25));
        daily->setFont(font1);
        daily->setFlat(true);
        digital = new QPushButton(CATEGORY);
        digital->setObjectName(QString::fromUtf8("digital"));
        digital->setGeometry(QRect(254, 159, 89, 25));
        digital->setFont(font1);
        digital->setFlat(true);
        car = new QPushButton(CATEGORY);
        car->setObjectName(QString::fromUtf8("car"));
        car->setGeometry(QRect(254, 189, 89, 25));
        car->setFont(font1);
        car->setFlat(true);
        toy = new QPushButton(CATEGORY);
        toy->setObjectName(QString::fromUtf8("toy"));
        toy->setGeometry(QRect(254, 219, 89, 25));
        toy->setFont(font1);
        toy->setFlat(true);
        pet = new QPushButton(CATEGORY);
        pet->setObjectName(QString::fromUtf8("pet"));
        pet->setGeometry(QRect(254, 250, 89, 25));
        pet->setFont(font1);
        pet->setFlat(true);
        label_6 = new QLabel(CATEGORY);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 66, 91, 251));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        label_7 = new QLabel(CATEGORY);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(255, 60, 101, 221));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        label_8 = new QLabel(CATEGORY);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(104, 312, 81, 21));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        label_10 = new QLabel(CATEGORY);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(102, 341, 81, 21));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        label_11 = new QLabel(CATEGORY);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(104, 374, 81, 21));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        label_9 = new QLabel(CATEGORY);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(256, 374, 91, 21));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        label_12 = new QLabel(CATEGORY);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(256, 283, 81, 21));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        label_13 = new QLabel(CATEGORY);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(257, 311, 81, 21));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        label_14 = new QLabel(CATEGORY);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(253, 342, 81, 21));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        label_15 = new QLabel(CATEGORY);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(68, 410, 211, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Abyssinica SIL")});
        font2.setPointSize(9);
        font2.setBold(true);
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        tableWidget_3 = new QTableWidget(CATEGORY);
        if (tableWidget_3->columnCount() < 3)
            tableWidget_3->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(60, 0, 321, 571));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/list.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(CATEGORY, icon2, QString());
        label_2->raise();
        label_7->raise();
        label_6->raise();
        fashion->raise();
        kids->raise();
        kitchen->raise();
        home_interior->raise();
        sports->raise();
        book->raise();
        office->raise();
        health->raise();
        beauty->raise();
        food->raise();
        daily->raise();
        digital->raise();
        car->raise();
        toy->raise();
        pet->raise();
        label_8->raise();
        label_10->raise();
        label_11->raise();
        label_9->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        tableWidget_3->raise();
        SEARCH = new QWidget();
        SEARCH->setObjectName(QString::fromUtf8("SEARCH"));
        label_3 = new QLabel(SEARCH);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 40, 441, 571));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/cou3.jpg);"));
        lineEdit = new QLineEdit(SEARCH);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(92, 43, 231, 30));
        pushButton = new QPushButton(SEARCH);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(328, 43, 31, 31));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(25, 25));
        pushButton->setFlat(false);
        tableWidget_2 = new QTableWidget(SEARCH);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(80, 110, 281, 461));
        tabWidget->addTab(SEARCH, icon3, QString());
        DELIVERY = new QWidget();
        DELIVERY->setObjectName(QString::fromUtf8("DELIVERY"));
        pushButton_4 = new QPushButton(DELIVERY);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 20, 41, 41));
        searchWord_2 = new QLineEdit(DELIVERY);
        searchWord_2->setObjectName(QString::fromUtf8("searchWord_2"));
        searchWord_2->setGeometry(QRect(30, 20, 191, 41));
        tableWidget = new QTableWidget(DELIVERY);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 70, 331, 491));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/delivery.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(DELIVERY, icon4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        address = new QLineEdit(tab);
        address->setObjectName(QString::fromUtf8("address"));
        address->setGeometry(QRect(80, 110, 271, 61));
        label_23 = new QLabel(tab);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(306, 30, 91, 31));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(136, 138, 133);"));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(52, 33, 41, 21));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(245, 121, 0);\n"
"color: rgb(32, 74, 135);\n"
"background-color: rgb(238, 238, 236);"));
        payment = new QLineEdit(tab);
        payment->setObjectName(QString::fromUtf8("payment"));
        payment->setGeometry(QRect(80, 260, 271, 61));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(50, 60, 331, 141));
        label_17->setFrameShape(QFrame::Box);
        label_17->setFrameShadow(QFrame::Sunken);
        label_17->setLineWidth(2);
        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 20, 411, 541));
        label_20->setFrameShape(QFrame::Box);
        label_20->setFrameShadow(QFrame::Sunken);
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(90, 33, 61, 21));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(237, 212, 0);\n"
"color: rgb(114, 159, 207);\n"
"background-color: rgb(238, 238, 236);"));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 510, 330, 41));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8(""));
        label_21 = new QLabel(tab);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(80, 220, 67, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ubuntu")});
        font3.setPointSize(13);
        font3.setBold(false);
        label_21->setFont(font3);
        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(80, 70, 67, 31));
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(85, 87, 83);"));
        label_22 = new QLabel(tab);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(50, 210, 331, 141));
        label_22->setFrameShape(QFrame::Box);
        label_22->setFrameShadow(QFrame::Sunken);
        label_22->setLineWidth(2);
        label_24 = new QLabel(tab);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(80, 370, 91, 31));
        label_24->setFont(font3);
        label_25 = new QLabel(tab);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(50, 360, 331, 141));
        label_25->setFrameShape(QFrame::Box);
        label_25->setFrameShadow(QFrame::Sunken);
        label_25->setLineWidth(2);
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 410, 271, 61));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 665, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\353\263\265\355\214\241\354\227\220\354\204\234 \352\262\200\354\203\211\355\225\230\354\204\270\354\232\224!                           ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "BOK", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "PANG", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(HOME), QCoreApplication::translate("MainWindow", "HOME", nullptr));
        label_2->setText(QString());
        fashion->setText(QCoreApplication::translate("MainWindow", "\355\214\250\354\205\230\354\235\230\353\245\230/\354\236\241\355\231\224", nullptr));
        kids->setText(QCoreApplication::translate("MainWindow", "\354\266\234\354\202\260/\354\234\240\354\225\204\353\217\231", nullptr));
        kitchen->setText(QCoreApplication::translate("MainWindow", "\354\243\274\353\260\251\354\232\251\355\222\210", nullptr));
        home_interior->setText(QCoreApplication::translate("MainWindow", "\355\231\210\354\235\270\355\205\214\353\246\254\354\226\264", nullptr));
        sports->setText(QCoreApplication::translate("MainWindow", "\354\212\244\355\217\254\354\270\240/\353\240\210\354\240\200", nullptr));
        book->setText(QCoreApplication::translate("MainWindow", "\353\217\204\354\204\234/\354\235\214\353\260\230/DVD", nullptr));
        office->setText(QCoreApplication::translate("MainWindow", "\353\254\270\352\265\254/\354\230\244\355\224\274\354\212\244", nullptr));
        health->setText(QCoreApplication::translate("MainWindow", "\355\227\254\354\212\244/\352\261\264\352\260\225\354\213\235\355\222\210", nullptr));
        beauty->setText(QCoreApplication::translate("MainWindow", "\353\267\260\355\213\260", nullptr));
        food->setText(QCoreApplication::translate("MainWindow", "\354\213\235\355\222\210", nullptr));
        daily->setText(QCoreApplication::translate("MainWindow", "\354\203\235\355\231\234\354\232\251\355\222\210", nullptr));
        digital->setText(QCoreApplication::translate("MainWindow", "\352\260\200\354\240\204\353\224\224\354\247\200\355\204\270", nullptr));
        car->setText(QCoreApplication::translate("MainWindow", "\354\236\220\353\217\231\354\260\250\354\232\251\355\222\210", nullptr));
        toy->setText(QCoreApplication::translate("MainWindow", "\354\231\204\352\265\254/\354\267\250\353\257\270", nullptr));
        pet->setText(QCoreApplication::translate("MainWindow", "\353\260\230\353\240\244\353\217\231\353\254\274\354\232\251\355\222\210", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "    \352\263\250\353\223\234\353\260\225\354\212\244", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "     \352\270\260\355\232\215\354\240\204", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "  \353\241\234\354\274\223\354\204\240\353\254\274\355\225\230\352\270\260", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "  \353\263\265\355\214\241\353\235\274\354\235\264\353\270\214", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "   \354\227\254\355\226\211/\355\213\260\354\274\223", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "  \354\235\264\353\262\244\355\212\270/\354\277\240\355\217\260", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "    b.\354\227\220\353\271\204\353\211\264", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "   \353\263\265\355\214\241\354\235\230 \353\213\244\353\245\270 \354\204\234\353\271\204\354\212\244\353\245\274 \354\235\264\354\232\251\355\225\264\353\263\264\354\204\270\354\232\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\354\275\224\353\223\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\354\240\234\355\222\210\353\252\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\352\260\200\352\262\251", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(CATEGORY), QCoreApplication::translate("MainWindow", "CATEGORY", nullptr));
        label_3->setText(QString());
        pushButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\354\275\224\353\223\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\354\240\234\355\222\210\353\252\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\352\260\200\352\262\251", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(SEARCH), QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\353\260\260\354\206\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\354\243\274\353\254\270ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\352\263\240\352\260\235ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\353\260\260\354\206\241\354\203\201\355\203\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(DELIVERY), QCoreApplication::translate("MainWindow", "DELIVERY", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\354\243\274\353\254\270/\352\262\260\354\240\234", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "BOK", nullptr));
        label_17->setText(QString());
        label_20->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "PANG", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\352\262\260\354\240\234\355\225\230\352\270\260", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\352\262\260\354\240\234\354\210\230\353\213\250", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\353\260\260\354\206\241\354\247\200", nullptr));
        label_22->setText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "\354\265\234\354\242\205\352\262\260\354\240\234\352\270\210\354\225\241", nullptr));
        label_25->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Pay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
