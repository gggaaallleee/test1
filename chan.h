#ifndef CHAN_H
#define CHAN_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <iostream>
namespace Ui {
class chan;
}

class chan : public QWidget
{
    Q_OBJECT

public:
    explicit chan(QWidget *parent = nullptr);
    ~chan();

private:
    Ui::chan *ui;
signals:
    void display(int number);
private slots:
    void on_returnButton_clicked();
    void on_changeButton_clicked();
};

#endif // CHAN_H
