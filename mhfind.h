#ifndef MHFIND_H
#define MHFIND_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <iostream>
#include <QTableWidget>
#include <QTableWidgetItem>
namespace Ui {
class mhfind;
}

class mhfind : public QWidget
{
    Q_OBJECT

public:
    explicit mhfind(QWidget *parent = nullptr);
    ~mhfind();

private:
    Ui::mhfind *ui;
signals:
    void display(int number);
private slots:
    void on_returnButton_clicked();
    void on_mhfindButton_clicked();
    void on_allButton_clicked();
    void sort(int col);

};

#endif // MHFIND_H
