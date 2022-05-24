/********************************************************************************
** Form generated from reading UI file 'chan.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAN_H
#define UI_CHAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chan
{
public:
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_15;
    QLineEdit *inputnumlineEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *tellineEdit2;
    QLineEdit *deplineEdit2;
    QLineEdit *deglineEdit2;
    QLineEdit *collegelineEdit2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *namelineEdit2;
    QLineEdit *sexlineEdit2;
    QFrame *frame;
    QPushButton *changeButton;
    QPushButton *returnButton;

    void setupUi(QWidget *chan)
    {
        if (chan->objectName().isEmpty())
            chan->setObjectName(QString::fromUtf8("chan"));
        chan->resize(1046, 694);
        label_2 = new QLabel(chan);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(600, 120, 121, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   color:rgb(0, 0, 0)\n"
" \n"
"}"));
        layoutWidget = new QWidget(chan);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(530, 190, 121, 259));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font1.setPointSize(15);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   color:rgb(0, 0, 0)\n"
" \n"
"}"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   color:rgb(0, 0, 0)\n"
" \n"
"}"));

        verticalLayout->addWidget(label_4);


        verticalLayout_3->addLayout(verticalLayout);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   color:rgb(0, 0, 0)\n"
" \n"
"}"));

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   color:rgb(0, 0, 0)\n"
" \n"
"}"));

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   color:rgb(0, 0, 0)\n"
" \n"
"}"));

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   color:rgb(0, 0, 0)\n"
" \n"
"}"));

        verticalLayout_3->addWidget(label_9);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        label_15 = new QLabel(chan);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(160, 280, 111, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font2.setPointSize(25);
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   color:rgb(255, 255, 255)\n"
" \n"
"}"));
        inputnumlineEdit = new QLineEdit(chan);
        inputnumlineEdit->setObjectName(QString::fromUtf8("inputnumlineEdit"));
        inputnumlineEdit->setGeometry(QRect(270, 290, 201, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        inputnumlineEdit->setFont(font3);
        layoutWidget1 = new QWidget(chan);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(650, 270, 144, 191));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tellineEdit2 = new QLineEdit(layoutWidget1);
        tellineEdit2->setObjectName(QString::fromUtf8("tellineEdit2"));

        verticalLayout_4->addWidget(tellineEdit2);

        deplineEdit2 = new QLineEdit(layoutWidget1);
        deplineEdit2->setObjectName(QString::fromUtf8("deplineEdit2"));

        verticalLayout_4->addWidget(deplineEdit2);

        deglineEdit2 = new QLineEdit(layoutWidget1);
        deglineEdit2->setObjectName(QString::fromUtf8("deglineEdit2"));

        verticalLayout_4->addWidget(deglineEdit2);

        collegelineEdit2 = new QLineEdit(layoutWidget1);
        collegelineEdit2->setObjectName(QString::fromUtf8("collegelineEdit2"));

        verticalLayout_4->addWidget(collegelineEdit2);

        layoutWidget2 = new QWidget(chan);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(650, 190, 144, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        namelineEdit2 = new QLineEdit(layoutWidget2);
        namelineEdit2->setObjectName(QString::fromUtf8("namelineEdit2"));

        verticalLayout_2->addWidget(namelineEdit2);

        sexlineEdit2 = new QLineEdit(layoutWidget2);
        sexlineEdit2->setObjectName(QString::fromUtf8("sexlineEdit2"));

        verticalLayout_2->addWidget(sexlineEdit2);

        frame = new QFrame(chan);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-80, -10, 1061, 691));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"    background-image:url(:/new/1/others/backgroundimag.jpg);\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        changeButton = new QPushButton(frame);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        changeButton->setGeometry(QRect(430, 500, 231, 81));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font4.setPointSize(20);
        changeButton->setFont(font4);
        returnButton = new QPushButton(frame);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(430, 600, 231, 81));
        returnButton->setFont(font4);
        frame->raise();
        label_2->raise();
        layoutWidget->raise();
        label_15->raise();
        inputnumlineEdit->raise();
        layoutWidget1->raise();
        layoutWidget2->raise();

        retranslateUi(chan);

        QMetaObject::connectSlotsByName(chan);
    } // setupUi

    void retranslateUi(QWidget *chan)
    {
        chan->setWindowTitle(QCoreApplication::translate("chan", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("chan", "\346\226\260\346\225\260\346\215\256", nullptr));
        label_3->setText(QCoreApplication::translate("chan", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("chan", "\346\200\247\345\210\253", nullptr));
        label_6->setText(QCoreApplication::translate("chan", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        label_7->setText(QCoreApplication::translate("chan", "\347\263\273", nullptr));
        label_8->setText(QCoreApplication::translate("chan", "\345\255\246\345\216\206", nullptr));
        label_9->setText(QCoreApplication::translate("chan", "\345\255\246\351\231\242", nullptr));
        label_15->setText(QCoreApplication::translate("chan", "\345\267\245\345\217\267\357\274\232", nullptr));
        inputnumlineEdit->setText(QCoreApplication::translate("chan", "\350\257\267\350\276\223\345\205\245\345\267\245\345\217\267", nullptr));
        changeButton->setText(QCoreApplication::translate("chan", "\347\241\256\350\256\244\346\233\264\346\224\271", nullptr));
        returnButton->setText(QCoreApplication::translate("chan", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chan: public Ui_chan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAN_H
