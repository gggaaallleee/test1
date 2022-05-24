#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QString>
class employee
{

private:
    QString name;
    QString sex;
    QString num;
    QString tel;
    QString dep;
    QString deg;
    QString college;


public:
    ~employee(){}
    employee* next;
    employee():name(""),sex(""),num(""),tel(""),dep(""),deg(""),college(""),next(nullptr){}
    void setdata(QString name,QString sex,QString num,QString tel,QString dep,QString deg,QString college){
        this->name = name;
        this->sex = sex;
        this->num = num;
        this->tel = tel;
        this->dep = dep;
        this->deg = deg;
        this->college = college;
    }
    QString get_name(){
        return name;
    }
    QString get_sex(){
        return sex;
    }
    QString get_num(){
        return num;
    }
    QString get_tel(){
        return tel;
    }
    QString get_dep(){
        return dep;
    }
    QString get_deg(){
        return deg;
    }
    QString get_college(){
        return college;
    }
};
#endif // EMPLOYEE_H
