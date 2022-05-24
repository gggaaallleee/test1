#include "change.h"
#include "ui_change.h"

change::change(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change)
{
    ui->setupUi(this);
}

change::~change()
{
    delete ui;
}
void change::on_returnButton_clicked(){
    emit display(0);
}
void change::on_addButton_clicked(){
    emit display(3);
}
void change::on_chanButton_clicked(){
    emit display(4);
}
