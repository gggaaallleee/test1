#include "adddata.h"
#include "ui_adddata.h"
#include "list.h"
#include"employee.h"
adddata::adddata(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adddata)
{
    ui->setupUi(this);
}

adddata::~adddata()
{
    delete ui;
}
void adddata::on_returnButton_clicked(){
    emit display(1);
}
void adddata::on_addButton_clicked(){
    QString name = ui->namelineEdit->text();
    QString sex = ui->sexlineEdit->text();
    QString num = ui->numlineEdit->text();
    QString tel = ui->tellineEdit->text();
    QString dep = ui->deplineEdit->text();
    QString deg = ui->deglineEdit->text();
    QString college = ui->collegelineEdit->text();
    if(name == "" || sex == "" || num == "" || tel == "" || dep == ""|| deg == ""|| college == ""){
            QMessageBox::about(NULL, "是bug耶", "     添加数据时不能有空项     ");
     }
    else {
        QFile file("./data/employee.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
        if(!file.isOpen()){
                QMessageBox::about(NULL, "是bug耶", "    数据文件打开失败了捏      ");
                return;
        }

        QTextStream out(&file);
        out<< name <<" "<<sex<<" "<<num<<" "<<tel<<" "<<dep<<" "<<deg<<" "<<college<<endl;
        file.close();
        QMessageBox::about(NULL, "不是BUG耶", "     插入成功啦       ");
    }
}


void adddata::on_delButton_clicked(){

    QString delnum = ui->delnumlineEdit->text();
    if(delnum == ""){
        QMessageBox::about(NULL,"是bug耶","     删除数据时工号不可以是空       ");
    }
    else{
        QFile file("./data/employee.txt");
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        if(!file.isOpen()){
            QMessageBox::about(NULL, "是bug耶", "数据文件打开失败了捏");
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
        switch(a.del(delnum)){
            case -1:{
                QMessageBox::about(NULL, "是bug耶", "空链表怎么删东西呢？ ");
                break;
            }
            case 1:{
                QMessageBox::about(NULL, "不是BUG耶", "     删除成功啦       ");

                QFile file1("./data/employee.txt");

                file1.open(QIODevice::WriteOnly|QIODevice::Truncate|QIODevice::Text);

                if(!file1.isOpen()){
                        QMessageBox::about(NULL, "是bug耶", "    数据文件打开失败了捏      ");
                        return;
                }
                if(a.llength>0){
                    QTextStream out1(&file1);
                    employee* x = new employee;
                    x = a.head;
                    for(int i = 1;i<=a.llength;i++){
                        out1<< x->get_name() <<" "<<x->get_sex()<<" "<<x->get_num()<<" "<<x->get_tel()<<" "<<x->get_dep()<<" "<<x->get_deg()<<" "<<x->get_college()<<endl;
                        x = x->next;
                    }
                    file1.close();
                    delete x;
                }
                else {file1.close();}
                QMessageBox::about(NULL, "不是bug耶", "    文件更新成功     ");
                break;
            }
            case 0:{
                QMessageBox::about(NULL, "是bug耶", "链表里真的有你想删除的员工吗？ ");
                break;
            }
        }




    }

}
