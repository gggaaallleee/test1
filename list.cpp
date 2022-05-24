#include"list.h"

List::List(){
    head = new employee;
    head->next =  nullptr;
    llength = 0;
}
void List::add(QString name,QString sex,QString num,QString tel,QString dep,QString deg,QString college){
    employee* pre = head;
    while(pre->next!=nullptr){
        pre = pre->next;
    }
    pre ->next = new employee;
    pre ->setdata(name, sex,num,tel, dep,deg,college);
    pre = pre->next;
    pre ->next = nullptr;
    llength++;
}

int List::del(QString delnum){
    if(head->get_num()=="") return -1;

    else{
        employee* p =head,*r= NULL;
        if(head->get_num() == delnum){
            head = head->next;
            llength--;
            return 1;
        }
        while(p&&p->get_num()!=delnum){
            r = p;
            p = p->next;
        }
        if(p){
            r->next=r->next->next;
            llength--;
            return 1;
        }
        else return 0;
    }
}
int List::change(QString name,QString sex,QString changenum,QString tel,QString dep,QString deg,QString college){
    if(head->get_num()=="") return -1;
    else{
        employee* p =head;
        if(head->get_num() == changenum){
            head->setdata(name,sex,changenum,tel,dep,deg,college);
            return 1;
        }
        while(p&&p->get_num()!=changenum){
            p = p->next;
        }
        if(p){
            head->setdata(name,sex,changenum,tel,dep,deg,college);
            return 1;
        }
        else return 0;
    }

}
employee* List::jqfind(QString num){
        employee* p =head;
        if(head->get_num() == num){
            return head;
        }
        while(p&&p->get_num()!=num){
            p = p->next;
        }
        if(p){
            return p;
        }
        else return nullptr;
}

employee* List::jqfind(QString zhi,QString can,employee* temp){
        int ji = 0;
        if(can == "姓名"){
            QString x = temp->get_name();
            for(int i = 0;i<zhi.length();i++){
                for(int j = 0;j<x.length();j++){
                    if(zhi[i]==x[j]){
                        ji++;
                        break;
                    }
                }
            }
        }
        if(can == "性别"){
            QString x = temp->get_sex();
            for(int i = 0;i<zhi.length();i++){
                for(int j = 0;j<x.length();j++){
                    if(zhi[i]==x[j]){
                        ji++;
                        break;
                    }
                }
            }
        }
        if(can == "工号"){
            QString x = temp->get_num();
            for(int i = 0;i<zhi.length();i++){
                for(int j = 0;j<x.length();j++){
                    if(zhi[i]==x[j]){
                        ji++;
                        break;
                    }
                }
            }
        }
        if(can == "联系电话"){
            QString x = temp->get_tel();
            for(int i = 0;i<zhi.length();i++){
                for(int j = 0;j<x.length();j++){
                    if(zhi[i]==x[j]){
                        ji++;
                        break;
                    }
                }
            }
        }
        if(can == "所在学院"){
            QString x = temp->get_college();
            for(int i = 0;i<zhi.length();i++){
                for(int j = 0;j<x.length();j++){
                    if(zhi[i]==x[j]){
                        ji++;
                        break;
                    }
                }
            }
        }
        if(can == "系"){
            QString x = temp->get_dep();
            for(int i = 0;i<zhi.length();i++){
                for(int j = 0;j<x.length();j++){
                    if(zhi[i]==x[j]){
                        ji++;
                        break;
                    }
                }
            }
        }
        if(can == "学历"){
            QString x = temp->get_deg();
            for(int i = 0;i<zhi.length();i++){
                for(int j = 0;j<x.length();j++){
                    if(zhi[i]==x[j]){
                        ji++;
                        break;
                    }
                }
            }
        }

        if(ji >= zhi.length()) return temp;
        else return nullptr;
}
