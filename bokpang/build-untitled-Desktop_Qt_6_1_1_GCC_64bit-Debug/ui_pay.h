/********************************************************************************
** Form generated from reading UI file 'pay.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAY_H
#define UI_PAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pay
{
public:
    QLabel *label_16;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *address;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *payment;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton;

    void setupUi(QDialog *pay)
    {
        if (pay->objectName().isEmpty())
            pay->setObjectName(QString::fromUtf8("pay"));
        pay->resize(792, 666);
        label_16 = new QLabel(pay);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(200, 10, 411, 611));
        label_16->setFrameShape(QFrame::Box);
        label_16->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(pay);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 30, 61, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Condensed")});
        font.setPointSize(14);
        font.setBold(true);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(237, 212, 0);\n"
"color: rgb(114, 159, 207);\n"
"background-color: rgb(238, 238, 236);"));
        label_4 = new QLabel(pay);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(242, 30, 41, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(245, 121, 0);\n"
"color: rgb(32, 74, 135);\n"
"background-color: rgb(238, 238, 236);"));
        label = new QLabel(pay);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 80, 67, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(13);
        font1.setBold(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(85, 87, 83);"));
        label_2 = new QLabel(pay);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 70, 331, 141));
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Sunken);
        label_2->setLineWidth(2);
        address = new QLineEdit(pay);
        address->setObjectName(QString::fromUtf8("address"));
        address->setGeometry(QRect(270, 120, 271, 61));
        label_3 = new QLabel(pay);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 250, 67, 31));
        label_3->setFont(font1);
        label_6 = new QLabel(pay);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(240, 240, 331, 141));
        label_6->setFrameShape(QFrame::Box);
        label_6->setFrameShadow(QFrame::Sunken);
        label_6->setLineWidth(2);
        payment = new QLineEdit(pay);
        payment->setObjectName(QString::fromUtf8("payment"));
        payment->setGeometry(QRect(270, 290, 271, 61));
        label_7 = new QLabel(pay);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 420, 91, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(pay);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(240, 410, 331, 141));
        label_8->setFrameShape(QFrame::Box);
        label_8->setFrameShadow(QFrame::Sunken);
        label_8->setLineWidth(2);
        label_9 = new QLabel(pay);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(496, 27, 91, 31));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(136, 138, 133);"));
        pushButton = new QPushButton(pay);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 564, 330, 41));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8(""));
        label_16->raise();
        label_8->raise();
        label_6->raise();
        label_2->raise();
        label_4->raise();
        label_5->raise();
        label->raise();
        address->raise();
        label_3->raise();
        payment->raise();
        label_7->raise();
        label_9->raise();
        pushButton->raise();

        retranslateUi(pay);

        QMetaObject::connectSlotsByName(pay);
    } // setupUi

    void retranslateUi(QDialog *pay)
    {
        pay->setWindowTitle(QCoreApplication::translate("pay", "Dialog", nullptr));
        label_16->setText(QString());
        label_5->setText(QCoreApplication::translate("pay", "PANG", nullptr));
        label_4->setText(QCoreApplication::translate("pay", "BOK", nullptr));
        label->setText(QCoreApplication::translate("pay", "\353\260\260\354\206\241\354\247\200", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("pay", "\352\262\260\354\240\234\354\210\230\353\213\250", nullptr));
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("pay", "\354\265\234\354\242\205\352\262\260\354\240\234\352\270\210\354\225\241", nullptr));
        label_8->setText(QString());
        label_9->setText(QCoreApplication::translate("pay", "\354\243\274\353\254\270/\352\262\260\354\240\234", nullptr));
        pushButton->setText(QCoreApplication::translate("pay", "\352\262\260\354\240\234\355\225\230\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pay: public Ui_pay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAY_H
