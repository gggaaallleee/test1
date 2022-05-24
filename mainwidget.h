#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include"find.h"
#include"change.h"
#include"QStackedLayout"
#include"widget.h"
#include"adddata.h"
#include"chan.h"
#include"jqfind.h"
#include"mhfind.h"
#include"xltj.h"
#include"employee.h"
namespace Ui {
class mainwidget;
}

class mainwidget : public QWidget
{
    Q_OBJECT

public:
    explicit mainwidget(QWidget *parent = nullptr);
    ~mainwidget();

private:
    Ui::mainwidget *ui;

    Widget *widget;
    Find *fi;
    change *ch;
    QStackedLayout *stackLayout;
    adddata *add;
    chan *chann;
    jqfind *jq;
    mhfind * mh;
    xltj *xl;
};

#endif // MAINWIDGET_H
