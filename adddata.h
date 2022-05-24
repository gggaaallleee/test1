#ifndef ADDDATA_H
#define ADDDATA_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <iostream>
using namespace std;
namespace Ui {
class adddata;
}

class adddata : public QWidget
{
    Q_OBJECT

public:

    explicit adddata(QWidget *parent = nullptr);
    ~adddata();

private:
    Ui::adddata *ui;
signals:
    void display(int number);
private slots:
    void on_returnButton_clicked();
    void on_addButton_clicked();
    void on_delButton_clicked();
};

#endif // ADDDATA_H
