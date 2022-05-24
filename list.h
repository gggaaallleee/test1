#ifndef LIST_H
#define LIST_H
#include"employee.h"
#include<iostream>
using namespace std;
class List
{

public:
    List();
    ~List(){
    }
    int llength;
    void add(QString,QString,QString,QString,QString,QString,QString);
    int del(QString);
    employee* jqfind(QString);
    employee* jqfind(QString,QString,employee*);
    int change(QString,QString,QString,QString,QString,QString,QString);
    employee* head;
};

#endif // LIST_H
