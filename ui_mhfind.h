/********************************************************************************
** Form generated from reading UI file 'mhfind.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MHFIND_H
#define UI_MHFIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mhfind
{
public:
    QLineEdit *ffindlineEdit;
    QPushButton *mhfindButton;
    QPushButton *returnButton;
    QComboBox *scomboBox;
    QTableWidget *tableWidget;
    QPushButton *allButton;
    QLabel *label;
    QFrame *frame;

    void setupUi(QWidget *mhfind)
    {
        if (mhfind->objectName().isEmpty())
            mhfind->setObjectName(QString::fromUtf8("mhfind"));
        mhfind->resize(963, 677);
        ffindlineEdit = new QLineEdit(mhfind);
        ffindlineEdit->setObjectName(QString::fromUtf8("ffindlineEdit"));
        ffindlineEdit->setGeometry(QRect(90, 80, 461, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        font.setPointSize(15);
        ffindlineEdit->setFont(font);
        mhfindButton = new QPushButton(mhfind);
        mhfindButton->setObjectName(QString::fromUtf8("mhfindButton"));
        mhfindButton->setGeometry(QRect(780, 170, 141, 61));
        mhfindButton->setFont(font);
        returnButton = new QPushButton(mhfind);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(390, 610, 141, 61));
        returnButton->setFont(font);
        scomboBox = new QComboBox(mhfind);
        scomboBox->addItem(QString());
        scomboBox->addItem(QString());
        scomboBox->addItem(QString());
        scomboBox->addItem(QString());
        scomboBox->addItem(QString());
        scomboBox->addItem(QString());
        scomboBox->addItem(QString());
        scomboBox->addItem(QString());
        scomboBox->setObjectName(QString::fromUtf8("scomboBox"));
        scomboBox->setGeometry(QRect(590, 80, 331, 61));
        scomboBox->setFont(font);
        tableWidget = new QTableWidget(mhfind);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
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
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget->rowCount() < 11)
            tableWidget->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem17);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(90, 180, 681, 391));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\261\211\344\273\252\347\247\246\345\267\235\351\243\236\345\275\261W"));
        tableWidget->setFont(font1);
        allButton = new QPushButton(mhfind);
        allButton->setObjectName(QString::fromUtf8("allButton"));
        allButton->setGeometry(QRect(780, 260, 141, 61));
        allButton->setFont(font);
        label = new QLabel(mhfind);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 150, 241, 21));
        label->setFont(font1);
        frame = new QFrame(mhfind);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-20, -70, 1051, 741));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"    background-image:url(:/new/prefix2/others/end.jpg)\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        ffindlineEdit->raise();
        mhfindButton->raise();
        returnButton->raise();
        scomboBox->raise();
        tableWidget->raise();
        allButton->raise();
        label->raise();

        retranslateUi(mhfind);

        QMetaObject::connectSlotsByName(mhfind);
    } // setupUi

    void retranslateUi(QWidget *mhfind)
    {
        mhfind->setWindowTitle(QCoreApplication::translate("mhfind", "Form", nullptr));
        ffindlineEdit->setText(QCoreApplication::translate("mhfind", "\347\202\271\345\207\273\350\241\250\345\244\264\345\217\257\344\273\245\346\216\222\345\272\217\345\223\237", nullptr));
        mhfindButton->setText(QCoreApplication::translate("mhfind", "\346\250\241\347\263\212\346\237\245\346\211\276", nullptr));
        returnButton->setText(QCoreApplication::translate("mhfind", "\350\277\224\345\233\236", nullptr));
        scomboBox->setItemText(0, QCoreApplication::translate("mhfind", "\350\257\267\351\200\211\346\213\251\346\250\241\347\263\212\346\237\245\350\257\242\347\232\204\346\240\271\346\215\256", nullptr));
        scomboBox->setItemText(1, QCoreApplication::translate("mhfind", "\345\247\223\345\220\215", nullptr));
        scomboBox->setItemText(2, QCoreApplication::translate("mhfind", "\346\200\247\345\210\253", nullptr));
        scomboBox->setItemText(3, QCoreApplication::translate("mhfind", "\345\267\245\345\217\267", nullptr));
        scomboBox->setItemText(4, QCoreApplication::translate("mhfind", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        scomboBox->setItemText(5, QCoreApplication::translate("mhfind", "\346\211\200\345\234\250\345\255\246\351\231\242", nullptr));
        scomboBox->setItemText(6, QCoreApplication::translate("mhfind", "\347\263\273", nullptr));
        scomboBox->setItemText(7, QCoreApplication::translate("mhfind", "\345\255\246\345\216\206", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("mhfind", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("mhfind", "\346\200\247\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("mhfind", "\345\267\245\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("mhfind", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("mhfind", "\347\263\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("mhfind", "\345\255\246\345\216\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("mhfind", "\346\211\200\345\234\250\345\255\246\351\231\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("mhfind", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("mhfind", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("mhfind", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("mhfind", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("mhfind", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("mhfind", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("mhfind", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("mhfind", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("mhfind", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("mhfind", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("mhfind", "11", nullptr));
        allButton->setText(QCoreApplication::translate("mhfind", "\345\205\250\351\203\250\345\221\230\345\267\245", nullptr));
        label->setText(QCoreApplication::translate("mhfind", "\347\202\271\345\207\273\350\241\250\345\244\264\350\277\233\350\241\214\346\214\211\345\255\227\347\254\246\344\270\262\345\244\247\345\260\217\346\216\222\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mhfind: public Ui_mhfind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MHFIND_H
