#include "mywidget.h"
#include <QPushButton>

//构造函数
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    //在堆区创建一个按钮对象
    QPushButton *btn = new QPushButton;
    //btn->show();    //如果是show函数，默认是以顶层的方式弹出窗口
    //但是我们要求是需要将btn按钮依赖到MyWidget窗口中
    btn->setParent(this);   //this表示MyWidget的指针
    //在按钮上显示文本
    btn->setText("点击");
    //设置窗口大小
    resize(600,600);
    //设置固定的窗口大小
    this->setFixedSize(600,600);
    //设置 窗口标题
    this->setWindowTitle("lalala");
}

//析构函数
MyWidget::~MyWidget()
{
}
