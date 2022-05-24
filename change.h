#ifndef CHANGE_H
#define CHANGE_H

#include <QWidget>

namespace Ui {
class change;
}

class change : public QWidget
{
    Q_OBJECT

public:
    explicit change(QWidget *parent = nullptr);
    ~change();


private:
    Ui::change *ui;
signals:
    void display(int number);
private slots:
    void on_returnButton_clicked();
    void on_addButton_clicked();
    void on_chanButton_clicked();
};

#endif // CHANGE_H
