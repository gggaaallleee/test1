#ifndef FIND_H
#define FIND_H

#include <QWidget>

namespace Ui {
class Find;
}

class Find : public QWidget
{
    Q_OBJECT

public:
    explicit Find(QWidget *parent = nullptr);
    ~Find();

private:
    Ui::Find *ui;
signals:
    void display(int number);
private slots:
    void on_returnButton_clicked();
    void on_jqfindButton_clicked();
    void on_mhfindButton_clicked();
    void on_xltjfindButton_clicked();



};

#endif // FIND_H
