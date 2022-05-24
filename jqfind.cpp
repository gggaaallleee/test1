#include "jqfind.h"
#include "ui_jqfind.h"
#include "list.h"
#include"employee.h"
jqfind::jqfind(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jqfind)
{
    ui->setupUi(this);
}

jqfind::~jqfind()
{
    delete ui;
}
void jqfind::on_returnButton_clicked(){
    emit display(2);
}
void jqfind::on_findButton_clicked(){
    QString findnum = ui->jqinput->text();
    if(findnum == ""){
            QMessageBox::about(NULL, "是bug耶", "     查找数据时不能有空项         ");
     }
    else{
        QFile file("./data/employee.txt");
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        if(!file.isOpen()){
                QMessageBox::about(NULL, "是bug耶", "    数据文件打开失败了捏         ");
                return;
        }
        QTextStream inp(&file);
        List a;
        while(!inp.atEnd()){
            QString name;
            QString sex;
            QString num;
            QString tel;
            QString dep;
            QString deg;
            QString college;
            inp>>name>>sex>>num>>tel>>dep>>deg>>college;
            a.add(name, sex,num,tel, dep,deg,college);
        }
        file.close();
        employee* y = a.jqfind(findnum);
        if(a.head->get_num()=="") {
            QMessageBox::about(NULL, "是bug耶", "      空链表怎么查找东西呢？      ");
        }
        else if(y){
            ui->namel->setText(y->get_name());
            ui->sexl->setText(y->get_sex());
            ui->telll->setText(y->get_tel());
            ui->depl->setText(y->get_dep());
            ui->degl->setText(y->get_deg());
            ui->collegel->setText(y->get_college());
            QMessageBox::about(NULL, "不是bug耶", "      查找成功         ");
            delete y;
        }
        else QMessageBox::about(NULL, "是bug耶", "    链表里真的有你想查找的员工吗？    ");
    }
}
