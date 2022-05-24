/********************************************************************************
** Form generated from reading UI file 'xltj.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XLTJ_H
#define UI_XLTJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xltj
{
public:
    QComboBox *xlcomboBox;
    QPushButton *returnButton;
    QPushButton *tjtButton;
    QTableWidget *ttableWidget;
    QFrame *frame;

    void setupUi(QWidget *xltj)
    {
        if (xltj->objectName().isEmpty())
            xltj->setObjectName(QString::fromUtf8("xltj"));
        xltj->resize(979, 648);
        xlcomboBox = new QComboBox(xltj);
        xlcomboBox->setObjectName(QString::fromUtf8("xlcomboBox"));
        xlcomboBox->setGeometry(QRect(80, 70, 181, 71));
        returnButton = new QPushButton(xltj);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(780, 480, 111, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font.setPointSize(15);
        returnButton->setFont(font);
        tjtButton = new QPushButton(xltj);
        tjtButton->setObjectName(QString::fromUtf8("tjtButton"));
        tjtButton->setGeometry(QRect(290, 70, 121, 71));
        tjtButton->setFont(font);
        ttableWidget = new QTableWidget(xltj);
        ttableWidget->setObjectName(QString::fromUtf8("ttableWidget"));
        ttableWidget->setGeometry(QRect(80, 170, 601, 391));
        frame = new QFrame(xltj);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-10, -80, 981, 731));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"    background-image:url(:/new/prefix2/others/end.jpg)\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        xlcomboBox->raise();
        returnButton->raise();
        tjtButton->raise();
        ttableWidget->raise();

        retranslateUi(xltj);

        QMetaObject::connectSlotsByName(xltj);
    } // setupUi

    void retranslateUi(QWidget *xltj)
    {
        xltj->setWindowTitle(QCoreApplication::translate("xltj", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("xltj", "\350\277\224\345\233\236", nullptr));
        tjtButton->setText(QCoreApplication::translate("xltj", "\345\274\200\345\247\213\347\273\237\350\256\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xltj: public Ui_xltj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XLTJ_H
