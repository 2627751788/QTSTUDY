#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>  //当前的基类（QDialog）

class MyWidget : public QWidget
{
    Q_OBJECT        //提供了QT中信号与曹的机制

public:
    MyWidget(QWidget *parent = 0);  //构造函数，析构函数的定义
    ~MyWidget();
};

#endif // MYWIDGET_H
