#include "widget.h"
#include "ui_widget.h"
#include<iostream>
using namespace std;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_changeButton_clicked(){
    emit display(1);
}
void Widget::on_findButton_clicked(){

    emit display(2);
}

void Widget::on_exitButton_clicked(){
    QApplication::exit();
}


