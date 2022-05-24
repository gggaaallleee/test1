#include "find.h"
#include "ui_find.h"

Find::Find(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Find)
{
    ui->setupUi(this);
}

Find::~Find()
{
    delete ui;
}
void Find::on_returnButton_clicked(){
    emit display(0);
}
void Find::on_jqfindButton_clicked(){
    emit display(5);
}
void Find::on_mhfindButton_clicked(){
    emit display(6);
}
void Find::on_xltjfindButton_clicked(){
    emit display(7);
}

