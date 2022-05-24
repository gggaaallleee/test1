#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

signals:
    void display(int number);

private slots:
    void  on_exitButton_clicked();
    void  on_findButton_clicked();
    void  on_changeButton_clicked();

};
#endif // WIDGET_H
