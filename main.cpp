#include "mainwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainwidget w;
    w.setWindowTitle("教职工管理系统");
    w.show();

    return a.exec();
}
