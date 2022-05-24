#ifndef XLTJ_H
#define XLTJ_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <iostream>
#include <QTableWidget>
#include <QTableWidgetItem>
namespace Ui {
class xltj;
}

class xltj : public QWidget
{
    Q_OBJECT

public:
    explicit xltj(QWidget *parent = nullptr);
    ~xltj();

private:
    Ui::xltj *ui;
signals:
    void display(int number);
private slots:
    void on_returnButton_clicked();
    void on_tjtButton_clicked();
    void removeListSame(QStringList *);
};

#endif // XLTJ_H
