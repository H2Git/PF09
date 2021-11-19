/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_manager
{
public:
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QDialog *manager)
    {
        if (manager->objectName().isEmpty())
            manager->setObjectName(QString::fromUtf8("manager"));
        manager->resize(873, 692);
        manager->setLayoutDirection(Qt::LeftToRight);
        label_5 = new QLabel(manager);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(730, 50, 51, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Condensed")});
        font.setPointSize(14);
        font.setBold(true);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(237, 212, 0);\n"
"color: rgb(114, 159, 207);\n"
""));
        label_4 = new QLabel(manager);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(696, 50, 40, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(245, 121, 0);\n"
"color: rgb(32, 74, 135);\n"
""));
        label = new QLabel(manager);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 30, 721, 611));
        label->setFrameShape(QFrame::Box);
        tableWidget = new QTableWidget(manager);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(125, 100, 651, 511));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Abyssinica SIL")});
        font1.setPointSize(9);
        tableWidget->setFont(font1);
        tableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tableWidget->setGridStyle(Qt::DashLine);
        label->raise();
        label_5->raise();
        label_4->raise();
        tableWidget->raise();

        retranslateUi(manager);

        QMetaObject::connectSlotsByName(manager);
    } // setupUi

    void retranslateUi(QDialog *manager)
    {
        manager->setWindowTitle(QCoreApplication::translate("manager", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("manager", "PANG", nullptr));
        label_4->setText(QCoreApplication::translate("manager", "BOK", nullptr));
        label->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("manager", "\353\214\200\353\266\204\353\245\230", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("manager", "\354\244\221\353\266\204\353\245\230", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("manager", "\354\206\214\353\266\204\353\245\230", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("manager", "\355\222\210\353\252\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("manager", "\352\260\200\352\262\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("manager", "\354\240\234\355\222\210ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manager: public Ui_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
