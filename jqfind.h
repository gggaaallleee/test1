#ifndef JQFIND_H
#define JQFIND_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <iostream>
namespace Ui {
class jqfind;
}

class jqfind : public QWidget
{
    Q_OBJECT

public:
    explicit jqfind(QWidget *parent = nullptr);
    ~jqfind();

private:
    Ui::jqfind *ui;
signals:
    void display(int number);
private slots:
    void on_returnButton_clicked();
    void on_findButton_clicked();
};

#endif // JQFIND_H
