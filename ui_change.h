/********************************************************************************
** Form generated from reading UI file 'change.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_H
#define UI_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change
{
public:
    QPushButton *returnButton;
    QPushButton *addButton;
    QPushButton *chanButton;
    QFrame *frame;

    void setupUi(QWidget *change)
    {
        if (change->objectName().isEmpty())
            change->setObjectName(QString::fromUtf8("change"));
        change->resize(962, 679);
        returnButton = new QPushButton(change);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(370, 480, 241, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font.setPointSize(15);
        returnButton->setFont(font);
        returnButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 10px;\n"
"   border: 3px groove blue;\n"
"   background-color:rgba(36, 3, 199,0.8);;\n"
"   color:rgba(255, 255, 255,0.5);\n"
"   \n"
"}\n"
"QPushButton:hover{\n"
"   border-radius: 10px;\n"
"   border: 3px groove white;\n"
"   background-color:rgba(36, 3, 199,1);;\n"
"   color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"   border-radius: 10px;\n"
"   border: 3px groove black;\n"
"   background-color:rgba(110, 209, 255,0.9);;\n"
"   color:rgba(255, 255, 255,0.9);\n"
"}"));
        addButton = new QPushButton(change);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(380, 150, 211, 111));
        addButton->setFont(font);
        addButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 10px;\n"
"   border: 3px groove blue;\n"
"   background-color:rgba(36, 3, 199,0.8);;\n"
"   color:rgba(255, 255, 255,0.5);\n"
"   \n"
"}\n"
"QPushButton:hover{\n"
"   border-radius: 10px;\n"
"   border: 3px groove white;\n"
"   background-color:rgba(36, 3, 199,1);;\n"
"   color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"   border-radius: 10px;\n"
"   border: 3px groove black;\n"
"   background-color:rgba(110, 209, 255,0.9);;\n"
"   color:rgba(255, 255, 255,0.9);\n"
"}"));
        chanButton = new QPushButton(change);
        chanButton->setObjectName(QString::fromUtf8("chanButton"));
        chanButton->setGeometry(QRect(380, 310, 211, 111));
        chanButton->setFont(font);
        chanButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 10px;\n"
"   border: 3px groove blue;\n"
"   background-color:rgba(36, 3, 199,0.8);;\n"
"   color:rgba(255, 255, 255,0.5);\n"
"   \n"
"}\n"
"QPushButton:hover{\n"
"   border-radius: 10px;\n"
"   border: 3px groove white;\n"
"   background-color:rgba(36, 3, 199,1);;\n"
"   color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"   border-radius: 10px;\n"
"   border: 3px groove black;\n"
"   background-color:rgba(110, 209, 255,0.9);;\n"
"   color:rgba(255, 255, 255,0.9);\n"
"}"));
        frame = new QFrame(change);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 961, 691));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"    background-image:url(:/new/1/others/1.jpg)\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        returnButton->raise();
        addButton->raise();
        chanButton->raise();

        retranslateUi(change);

        QMetaObject::connectSlotsByName(change);
    } // setupUi

    void retranslateUi(QWidget *change)
    {
        change->setWindowTitle(QCoreApplication::translate("change", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("change", "\344\270\273\350\217\234\345\215\225", nullptr));
        addButton->setText(QCoreApplication::translate("change", "\345\242\236\345\212\240\346\210\226\345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
        chanButton->setText(QCoreApplication::translate("change", "\346\240\271\346\215\256\345\267\245\345\217\267\344\277\256\346\224\271\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change: public Ui_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_H
