/********************************************************************************
** Form generated from reading UI file 'adddata.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDATA_H
#define UI_ADDDATA_H

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

class Ui_adddata
{
public:
    QPushButton *returnButton;
    QPushButton *addButton;
    QPushButton *delButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *namelineEdit;
    QLineEdit *sexlineEdit;
    QLineEdit *numlineEdit;
    QLineEdit *tellineEdit;
    QLineEdit *deplineEdit;
    QLineEdit *deglineEdit;
    QLineEdit *collegelineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *delnumlineEdit;
    QFrame *frame;
    QFrame *frame_2;
    QFrame *frame_3;

    void setupUi(QWidget *adddata)
    {
        if (adddata->objectName().isEmpty())
            adddata->setObjectName(QString::fromUtf8("adddata"));
        adddata->resize(1007, 691);
        returnButton = new QPushButton(adddata);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(410, 500, 151, 61));
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
        addButton = new QPushButton(adddata);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(290, 390, 151, 51));
        addButton->setFont(font);
        addButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        delButton = new QPushButton(adddata);
        delButton->setObjectName(QString::fromUtf8("delButton"));
        delButton->setGeometry(QRect(540, 390, 151, 51));
        delButton->setFont(font);
        delButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        layoutWidget = new QWidget(adddata);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 80, 462, 268));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font1.setPointSize(15);
        font1.setUnderline(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:rgb(255, 255, 255)\n"
"}"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:rgb(255, 255, 255)\n"
"}"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:rgb(255, 255, 255)\n"
"}"));

        verticalLayout->addWidget(label_3);


        verticalLayout_3->addLayout(verticalLayout);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:rgb(255, 255, 255)\n"
"}"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:rgb(255, 255, 255)\n"
"}"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:rgb(255, 255, 255)\n"
"}"));

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:rgb(255, 255, 255)\n"
"}"));

        verticalLayout_3->addWidget(label_7);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        namelineEdit = new QLineEdit(layoutWidget);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        verticalLayout_2->addWidget(namelineEdit);

        sexlineEdit = new QLineEdit(layoutWidget);
        sexlineEdit->setObjectName(QString::fromUtf8("sexlineEdit"));

        verticalLayout_2->addWidget(sexlineEdit);

        numlineEdit = new QLineEdit(layoutWidget);
        numlineEdit->setObjectName(QString::fromUtf8("numlineEdit"));

        verticalLayout_2->addWidget(numlineEdit);

        tellineEdit = new QLineEdit(layoutWidget);
        tellineEdit->setObjectName(QString::fromUtf8("tellineEdit"));

        verticalLayout_2->addWidget(tellineEdit);

        deplineEdit = new QLineEdit(layoutWidget);
        deplineEdit->setObjectName(QString::fromUtf8("deplineEdit"));

        verticalLayout_2->addWidget(deplineEdit);

        deglineEdit = new QLineEdit(layoutWidget);
        deglineEdit->setObjectName(QString::fromUtf8("deglineEdit"));

        verticalLayout_2->addWidget(deglineEdit);

        collegelineEdit = new QLineEdit(layoutWidget);
        collegelineEdit->setObjectName(QString::fromUtf8("collegelineEdit"));

        verticalLayout_2->addWidget(collegelineEdit);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:rgb(255, 255, 255)\n"
"}"));

        horizontalLayout->addWidget(label_8);

        delnumlineEdit = new QLineEdit(layoutWidget);
        delnumlineEdit->setObjectName(QString::fromUtf8("delnumlineEdit"));

        horizontalLayout->addWidget(delnumlineEdit);


        horizontalLayout_3->addLayout(horizontalLayout);

        frame = new QFrame(adddata);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(110, -10, 811, 701));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"    background-image:url(:/new/1/others/2.jpg)\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(adddata);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 111, 691));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"    background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(9, 41, 4, 255), stop:0.085 rgba(2, 79, 0, 255), stop:0.19 rgba(50, 147, 22, 255), stop:0.275 rgba(236, 191, 49, 255), stop:0.39 rgba(243, 61, 34, 255), stop:0.555 rgba(135, 81, 60, 255), stop:0.667 rgba(121, 75, 255, 255), stop:0.825 rgba(164, 255, 244, 255), stop:0.885 rgba(104, 222, 71, 255), stop:1 rgba(93, 128, 0, 255))\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(adddata);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(920, 0, 120, 691));
        frame_3->setStyleSheet(QString::fromUtf8("#frame_3{\n"
"    background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(9, 41, 4, 255), stop:0.085 rgba(2, 79, 0, 255), stop:0.19 rgba(50, 147, 22, 255), stop:0.275 rgba(236, 191, 49, 255), stop:0.39 rgba(243, 61, 34, 255), stop:0.555 rgba(135, 81, 60, 255), stop:0.667 rgba(121, 75, 255, 255), stop:0.825 rgba(164, 255, 244, 255), stop:0.885 rgba(104, 222, 71, 255), stop:1 rgba(93, 128, 0, 255))\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame->raise();
        layoutWidget->raise();
        returnButton->raise();
        addButton->raise();
        delButton->raise();
        frame_2->raise();
        frame_3->raise();

        retranslateUi(adddata);

        QMetaObject::connectSlotsByName(adddata);
    } // setupUi

    void retranslateUi(QWidget *adddata)
    {
        adddata->setWindowTitle(QCoreApplication::translate("adddata", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("adddata", "\350\277\224\345\233\236", nullptr));
        addButton->setText(QCoreApplication::translate("adddata", "\347\241\256\350\256\244\345\242\236\345\212\240", nullptr));
        delButton->setText(QCoreApplication::translate("adddata", "\347\241\256\350\256\244\345\210\240\351\231\244", nullptr));
        label->setText(QCoreApplication::translate("adddata", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("adddata", "\346\200\247\345\210\253", nullptr));
        label_3->setText(QCoreApplication::translate("adddata", "\345\267\245\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("adddata", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        label_5->setText(QCoreApplication::translate("adddata", "\347\263\273", nullptr));
        label_6->setText(QCoreApplication::translate("adddata", "\345\255\246\345\216\206", nullptr));
        label_7->setText(QCoreApplication::translate("adddata", "\345\255\246\351\231\242", nullptr));
        label_8->setText(QCoreApplication::translate("adddata", "\345\210\240\351\231\244\345\267\245\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adddata: public Ui_adddata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDATA_H
