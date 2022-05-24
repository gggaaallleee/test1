#include "xltj.h"
#include "ui_xltj.h"
#include "list.h"
#include"employee.h"
xltj::xltj(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xltj)
{
    ui->setupUi(this);
    QFile file("./data/employee.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen()){
            QMessageBox::about(NULL, "是bug耶", "    数据文件打开失败了捏         ");
            return;
    }
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
        if(name!=""){
            bool flag = 1;
            for(int i = 0 ; i < ui->xlcomboBox->count(); i ++ ){
                QString value = ui->xlcomboBox->itemText(i);
                if(dep == value){flag = 0;break;}
            }
            if(flag)ui->xlcomboBox->addItem(dep);
        }
       ui->ttableWidget->insertRow(0);
    }
    file.close();
}

xltj::~xltj()
{
    delete ui;
}
void xltj::on_returnButton_clicked(){
    emit display(2);
}
void xltj::on_tjtButton_clicked(){
    QStringList headerText;
    ui->ttableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->ttableWidget->clear();
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
        headerText.append(deg);
        a.add(name, sex,num,tel,dep,deg,college);
    }
    removeListSame(&headerText);
    ui->ttableWidget->clearContents();
    ui->ttableWidget->setColumnCount(headerText.count());
    ui->ttableWidget->setHorizontalHeaderLabels(headerText);



    int *p = new int[headerText.count()];
    QString *pp = new QString[headerText.count()];



    for(int i = 0;i<headerText.count();i++) {pp[i] = headerText.at(i);p[i]=0;}
    employee* t = a.head;
    QString ppp = ui->xlcomboBox->currentText();
    while(t->get_deg()!=""){
        for(int j = 0;j<headerText.count();j++){
            if((t->get_deg() == pp[j])&&(t->get_dep() == ppp)) p[j]++;
        }
        t = t->next;
    }
    for(int i = 0;i<headerText.count()-1;i++){
        ui ->ttableWidget->setItem(0,i,new QTableWidgetItem(QString::number(p[i])));
    }

    delete []p;
    delete []pp;
    file.close();
}
void xltj::removeListSame(QStringList *list)
{
    for (int i = 0; i < list->count(); i++)
    {
        for (int k = i + 1; k <  list->count(); k++)
        {
            if ( list->at(i) ==  list->at(k))
            {
                list->removeAt(k);
                k--;
            }
        }
    }
}
