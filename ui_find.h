/********************************************************************************
** Form generated from reading UI file 'find.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_H
#define UI_FIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Find
{
public:
    QPushButton *returnButton;
    QPushButton *jqfindButton;
    QPushButton *mhfindButton;
    QPushButton *xltjfindButton;
    QFrame *frame;

    void setupUi(QWidget *Find)
    {
        if (Find->objectName().isEmpty())
            Find->setObjectName(QString::fromUtf8("Find"));
        Find->resize(1057, 742);
        Find->setStyleSheet(QString::fromUtf8(""));
        returnButton = new QPushButton(Find);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(390, 500, 221, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font.setPointSize(15);
        returnButton->setFont(font);
        returnButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 10px;\n"
"   border: 3px groove blue;\n"
"   background-color:rgba(32, 25, 255,0.8);;\n"
"   color:rgba(255, 255, 255,0.5);\n"
"   \n"
"}\n"
"QPushButton:hover{\n"
"   border-radius: 10px;\n"
"   border: 3px groove white;\n"
"   background-color:rgba(32, 25, 255,1);;\n"
"   color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"   border-radius: 10px;\n"
"   border: 3px groove black;\n"
"   background-color:rgba(110, 209, 255,0.9);;\n"
"   color:rgba(255, 255, 255,0.9);\n"
"}"));
        jqfindButton = new QPushButton(Find);
        jqfindButton->setObjectName(QString::fromUtf8("jqfindButton"));
        jqfindButton->setGeometry(QRect(390, 50, 221, 111));
        jqfindButton->setFont(font);
        jqfindButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 10px;\n"
"   border: 3px groove blue;\n"
"   background-color:rgba(32, 25, 255,0.8);;\n"
"   color:rgba(255, 255, 255,0.5);\n"
"   \n"
"}\n"
"QPushButton:hover{\n"
"   border-radius: 10px;\n"
"   border: 3px groove white;\n"
"   background-color:rgba(32, 25, 255,1);;\n"
"   color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"   border-radius: 10px;\n"
"   border: 3px groove black;\n"
"   background-color:rgba(110, 209, 255,0.9);;\n"
"   color:rgba(255, 255, 255,0.9);\n"
"}"));
        mhfindButton = new QPushButton(Find);
        mhfindButton->setObjectName(QString::fromUtf8("mhfindButton"));
        mhfindButton->setGeometry(QRect(390, 200, 221, 111));
        mhfindButton->setFont(font);
        mhfindButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 10px;\n"
"   border: 3px groove blue;\n"
"   background-color:rgba(32, 25, 255,0.8);;\n"
"   color:rgba(255, 255, 255,0.5);\n"
"   \n"
"}\n"
"QPushButton:hover{\n"
"   border-radius: 10px;\n"
"   border: 3px groove white;\n"
"   background-color:rgba(32, 25, 255,1);;\n"
"   color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"   border-radius: 10px;\n"
"   border: 3px groove black;\n"
"   background-color:rgba(110, 209, 255,0.9);;\n"
"   color:rgba(255, 255, 255,0.9);\n"
"}"));
        xltjfindButton = new QPushButton(Find);
        xltjfindButton->setObjectName(QString::fromUtf8("xltjfindButton"));
        xltjfindButton->setGeometry(QRect(390, 350, 221, 111));
        xltjfindButton->setFont(font);
        xltjfindButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 10px;\n"
"   border: 3px groove blue;\n"
"   background-color:rgba(32, 25, 255,0.8);;\n"
"   color:rgba(255, 255, 255,0.5);\n"
"   \n"
"}\n"
"QPushButton:hover{\n"
"   border-radius: 10px;\n"
"   border: 3px groove white;\n"
"   background-color:rgba(32, 25, 255,1);;\n"
"   color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"   border-radius: 10px;\n"
"   border: 3px groove black;\n"
"   background-color:rgba(110, 209, 255,0.9);;\n"
"   color:rgba(255, 255, 255,0.9);\n"
"}"));
        frame = new QFrame(Find);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-1, -1, 1061, 751));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"    background-image: url(:/new/1/others/findback.jpg);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        returnButton->raise();
        jqfindButton->raise();
        mhfindButton->raise();
        xltjfindButton->raise();

        retranslateUi(Find);

        QMetaObject::connectSlotsByName(Find);
    } // setupUi

    void retranslateUi(QWidget *Find)
    {
        Find->setWindowTitle(QCoreApplication::translate("Find", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("Find", "\344\270\273\350\217\234\345\215\225", nullptr));
        jqfindButton->setText(QCoreApplication::translate("Find", "\347\262\276\347\241\256\346\237\245\350\257\242", nullptr));
        mhfindButton->setText(QCoreApplication::translate("Find", "\346\250\241\347\263\212\346\237\245\350\257\242\345\217\212\350\241\250\346\240\274\346\216\222\345\272\217", nullptr));
        xltjfindButton->setText(QCoreApplication::translate("Find", "\345\255\246\345\216\206\347\273\237\350\256\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Find: public Ui_Find {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_H
