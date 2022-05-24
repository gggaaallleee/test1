/********************************************************************************
** Form generated from reading UI file 'jqfind.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JQFIND_H
#define UI_JQFIND_H

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

class Ui_jqfind
{
public:
    QPushButton *returnButton;
    QLineEdit *jqinput;
    QLabel *label_15;
    QPushButton *findButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QVBoxLayout *verticalLayout;
    QLabel *namel;
    QLabel *sexl;
    QLabel *telll;
    QLabel *depl;
    QLabel *degl;
    QLabel *collegel;
    QFrame *frame;

    void setupUi(QWidget *jqfind)
    {
        if (jqfind->objectName().isEmpty())
            jqfind->setObjectName(QString::fromUtf8("jqfind"));
        jqfind->resize(1009, 705);
        returnButton = new QPushButton(jqfind);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(270, 460, 161, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font.setPointSize(15);
        returnButton->setFont(font);
        jqinput = new QLineEdit(jqfind);
        jqinput->setObjectName(QString::fromUtf8("jqinput"));
        jqinput->setGeometry(QRect(380, 80, 113, 23));
        label_15 = new QLabel(jqfind);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(390, 30, 111, 51));
        label_15->setFont(font);
        findButton = new QPushButton(jqfind);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setGeometry(QRect(460, 460, 131, 61));
        findButton->setFont(font);
        layoutWidget = new QWidget(jqfind);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 130, 311, 311));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_4->addWidget(label_5);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        verticalLayout_4->addWidget(label_10);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        verticalLayout_4->addWidget(label_11);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        verticalLayout_4->addWidget(label_12);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        verticalLayout_4->addWidget(label_13);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        verticalLayout_4->addWidget(label_14);


        horizontalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        namel = new QLabel(layoutWidget);
        namel->setObjectName(QString::fromUtf8("namel"));
        namel->setFont(font);

        verticalLayout->addWidget(namel);

        sexl = new QLabel(layoutWidget);
        sexl->setObjectName(QString::fromUtf8("sexl"));
        sexl->setFont(font);

        verticalLayout->addWidget(sexl);

        telll = new QLabel(layoutWidget);
        telll->setObjectName(QString::fromUtf8("telll"));
        telll->setFont(font);

        verticalLayout->addWidget(telll);

        depl = new QLabel(layoutWidget);
        depl->setObjectName(QString::fromUtf8("depl"));
        depl->setFont(font);

        verticalLayout->addWidget(depl);

        degl = new QLabel(layoutWidget);
        degl->setObjectName(QString::fromUtf8("degl"));
        degl->setFont(font);

        verticalLayout->addWidget(degl);

        collegel = new QLabel(layoutWidget);
        collegel->setObjectName(QString::fromUtf8("collegel"));
        collegel->setFont(font);

        verticalLayout->addWidget(collegel);


        horizontalLayout_2->addLayout(verticalLayout);

        frame = new QFrame(jqfind);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-220, -110, 1411, 811));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"    background-image:url(:/new/prefix2/others/end.jpg)\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        returnButton->raise();
        jqinput->raise();
        label_15->raise();
        findButton->raise();
        layoutWidget->raise();

        retranslateUi(jqfind);

        QMetaObject::connectSlotsByName(jqfind);
    } // setupUi

    void retranslateUi(QWidget *jqfind)
    {
        jqfind->setWindowTitle(QCoreApplication::translate("jqfind", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("jqfind", "\350\277\224\345\233\236", nullptr));
        label_15->setText(QCoreApplication::translate("jqfind", "\350\276\223\345\205\245\345\267\245\345\217\267", nullptr));
        findButton->setText(QCoreApplication::translate("jqfind", "\346\237\245\350\257\242", nullptr));
        label_5->setText(QCoreApplication::translate("jqfind", "         \345\247\223\345\220\215\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("jqfind", "         \346\200\247\345\210\253\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("jqfind", "    \350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("jqfind", "           \347\263\273\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("jqfind", "          \345\255\246\345\216\206\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("jqfind", "          \345\255\246\351\231\242\357\274\232", nullptr));
        namel->setText(QCoreApplication::translate("jqfind", "NULL", nullptr));
        sexl->setText(QCoreApplication::translate("jqfind", "NULL", nullptr));
        telll->setText(QCoreApplication::translate("jqfind", "NULL", nullptr));
        depl->setText(QCoreApplication::translate("jqfind", "NULL", nullptr));
        degl->setText(QCoreApplication::translate("jqfind", "NULL", nullptr));
        collegel->setText(QCoreApplication::translate("jqfind", "NULL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jqfind: public Ui_jqfind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JQFIND_H
