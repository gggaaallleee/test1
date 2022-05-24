#include "mainwidget.h"
#include "ui_mainwidget.h"
mainwidget::mainwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwidget)
{
    ui->setupUi(this);

    widget = new Widget;
    fi = new Find;
    ch = new change;
    add = new adddata;
    chann = new chan;
    stackLayout=  new QStackedLayout;
    jq = new jqfind;
    mh = new mhfind;
    xl = new xltj;

     stackLayout->addWidget(widget);
     stackLayout->addWidget(ch);
     stackLayout->addWidget(fi);
     stackLayout->addWidget(add);
     stackLayout->addWidget(chann);
     stackLayout->addWidget(jq);
     stackLayout->addWidget(mh);
     stackLayout->addWidget(xl);
     setLayout(stackLayout);


    connect(widget,&Widget::display, stackLayout,&QStackedLayout::setCurrentIndex);
    connect(fi,&Find::display, stackLayout,&QStackedLayout::setCurrentIndex);
    connect(ch,&change::display, stackLayout,&QStackedLayout::setCurrentIndex);
    connect(add,&adddata::display, stackLayout,&QStackedLayout::setCurrentIndex);
    connect(chann,&chan::display, stackLayout,&QStackedLayout::setCurrentIndex);
    connect(jq,&jqfind::display, stackLayout,&QStackedLayout::setCurrentIndex);
    connect(mh,&mhfind::display, stackLayout,&QStackedLayout::setCurrentIndex);
    connect(xl,&xltj::display, stackLayout,&QStackedLayout::setCurrentIndex);

}

mainwidget::~mainwidget()
{
    delete ui;
}
