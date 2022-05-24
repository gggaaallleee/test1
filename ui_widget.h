/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *frame;
    QPushButton *exitButton;
    QLabel *label;
    QPushButton *findButton;
    QPushButton *changeButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(955, 765);
        Widget->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 961, 751));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"    background-image: url(:/new/prefix2/others/background.png);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        exitButton = new QPushButton(frame);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(370, 570, 201, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font.setPointSize(15);
        exitButton->setFont(font);
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 10px;\n"
"   border: 3px groove red;\n"
"   background-color:rgba(255,0,127,0.7);;\n"
"   color:rgba(255, 255, 255,0.5);\n"
"   \n"
"}\n"
"QPushButton:hover{\n"
"   border-radius: 10px;\n"
"   border: 3px groove white;\n"
"   background-color:rgba(255,0,127,1);;\n"
"   color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"   border-radius: 10px;\n"
"   border: 3px groove black;\n"
"   background-color:rgba(255,0,127,0.9);;\n"
"   color:rgba(255, 255, 255,0.9);\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 120, 631, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"    color:rgb(170, 0, 127);\n"
"   border-radius: 10px;\n"
"   border: 3px groove purple;\n"
"}"));
        findButton = new QPushButton(frame);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setGeometry(QRect(370, 410, 201, 101));
        findButton->setFont(font);
        findButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 10px;\n"
"   border: 3px groove red;\n"
"   background-color:rgba(255,0,127,0.7);;\n"
"   color:rgba(255, 255, 255,0.5);\n"
"   \n"
"}\n"
"QPushButton:hover{\n"
"   border-radius: 10px;\n"
"   border: 3px groove white;\n"
"   background-color:rgba(255,0,127,1);;\n"
"   color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"   border-radius: 10px;\n"
"   border: 3px groove black;\n"
"   background-color:rgba(255,0,127,0.9);;\n"
"   color:rgba(255, 255, 255,0.9);\n"
"}"));
        changeButton = new QPushButton(frame);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        changeButton->setGeometry(QRect(370, 260, 201, 91));
        changeButton->setFont(font);
        changeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 10px;\n"
"   border: 3px groove red;\n"
"   background-color:rgba(255,0,127,0.7);;\n"
"   color:rgba(255, 255, 255,0.5);\n"
"   \n"
"}\n"
"QPushButton:hover{\n"
"   border-radius: 10px;\n"
"   border: 3px groove white;\n"
"   background-color:rgba(255,0,127,1);;\n"
"   color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"   border-radius: 10px;\n"
"   border: 3px groove black;\n"
"   background-color:rgba(255,0,127,0.9);;\n"
"   color:rgba(255, 255, 255,0.9);\n"
"}"));
        changeButton->setCheckable(false);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        exitButton->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\231\350\201\214\345\267\245\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237\350\217\234\345\215\225", nullptr));
        findButton->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\346\237\245\350\257\242\345\217\212\347\273\237\350\256\241", nullptr));
        changeButton->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
