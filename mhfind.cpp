#include "mhfind.h"
#include "ui_mhfind.h"
#include "list.h"
#include"employee.h"
mhfind::mhfind(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mhfind)
{
    ui->setupUi(this);
    connect(ui->tableWidget->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(sort(int)));

}

mhfind::~mhfind()
{
    delete ui;
}
void mhfind::on_returnButton_clicked(){
    emit display(2);
}
void mhfind::on_allButton_clicked(){

    QFile file("./data/employee.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen()){
            QMessageBox::about(NULL, "是bug耶", "    数据文件打开失败了捏         ");
            return;
    }
    QTextStream inp(&file);
    ui->tableWidget->clearContents();
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setColumnCount(7);
    int i = 0;
    while(!inp.atEnd()){
        QString name;
        QString sex;
        QString num;
        QString tel;
        QString dep;
        QString deg;
        QString college;
        inp>>name>>sex>>num>>tel>>dep>>deg>>college;
        if(name!=""){
            int rowCount = ui->tableWidget->rowCount();
            if(i>=rowCount) ui->tableWidget->insertRow(rowCount);
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(name));
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(sex));
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(num));
            ui->tableWidget->setItem(i,3,new QTableWidgetItem(tel));
            ui->tableWidget->setItem(i,4,new QTableWidgetItem(dep));
            ui->tableWidget->setItem(i,5,new QTableWidgetItem(deg));
            ui->tableWidget->setItem(i,6,new QTableWidgetItem(college));
        }
        i++;
    }
    file.close();
}
void mhfind::on_mhfindButton_clicked(){
    QString mh = ui->ffindlineEdit->text();
    QString ffind = ui->scomboBox->currentText();
    if(mh == ""){
        QMessageBox::about(NULL, "是bug耶", "    空的条件怎么找呢         ");
        return;
    }
    QFile file("./data/employee.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen()){
            QMessageBox::about(NULL, "是bug耶", "    数据文件打开失败了捏         ");
            return;
    }
    List a;
    QTextStream inp(&file);
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
    ui->tableWidget->clearContents();
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setColumnCount(7);
    employee* temp = a.head;
    int i = 0;
    while(temp->get_num()!=""){
        if(a.jqfind(mh,ffind,temp)){
            int rowCount = ui->tableWidget->rowCount();
            if(i>=rowCount) ui->tableWidget->insertRow(rowCount);
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(temp->get_name()));
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(temp->get_sex()));
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(temp->get_num()));
            ui->tableWidget->setItem(i,3,new QTableWidgetItem(temp->get_tel()));
            ui->tableWidget->setItem(i,4,new QTableWidgetItem(temp->get_dep()));
            ui->tableWidget->setItem(i,5,new QTableWidgetItem(temp->get_deg()));
            ui->tableWidget->setItem(i,6,new QTableWidgetItem(temp->get_college()));
            i++;
        }
        temp=temp->next;
    }
    delete temp;
    file.close();

}
void mhfind::sort(int col)
{
    static int Flag = 1;
    if(Flag) {ui->tableWidget->sortItems(col, Qt::AscendingOrder);Flag = 0;}
    else {
        ui->tableWidget->sortItems(col, Qt::DescendingOrder);
        Flag = 1;
    }
}
