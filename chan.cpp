#include "chan.h"
#include "ui_chan.h"
#include "list.h"
#include"employee.h"
chan::chan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chan)
{
    ui->setupUi(this);
}

chan::~chan()
{
    delete ui;
}
void chan::on_returnButton_clicked(){
    emit display(1);
}
void chan::on_changeButton_clicked(){
    QString inputnum = ui->inputnumlineEdit->text();
    QString name = ui->namelineEdit2->text();
    QString sex = ui->sexlineEdit2->text();
    QString tel = ui->tellineEdit2->text();
    QString dep = ui->deplineEdit2->text();
    QString deg = ui->deglineEdit2->text();
    QString college = ui->collegelineEdit2->text();
    if(name == "" || sex == "" || inputnum == "" || tel == "" || dep == ""|| deg == ""|| college == ""){
            QMessageBox::about(NULL, "是bug耶", "     添加数据时不能有空项     ");
     }
    else{
        QFile file("./data/employee.txt");
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        if(!file.isOpen()){
                QMessageBox::about(NULL, "是bug耶", "    数据文件打开失败了捏      ");
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
        switch(a.change(name, sex,inputnum,tel, dep,deg,college)){
            case -1:{
                QMessageBox::about(NULL, "是bug耶", "空链表怎么修改东西呢？ ");
                break;
            }
            case 1:{
                QMessageBox::about(NULL, "不是BUG耶", "     修改成功啦       ");
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
                QMessageBox::about(NULL, "是bug耶", "链表里真的有你想修改的员工吗？ ");
                break;
            }

        }
        }
}
