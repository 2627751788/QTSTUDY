#include "mywidget.h"       //包含头文件
#include <QApplication>     //系统头文件，应用程序类

//程序入口argc:命令行参数的数量 argv：命令行变量数组
int main(int argc, char *argv[])
{
    //应用程序对象，QT中有且仅有一个应用程序对象
    QApplication a(argc, argv);
    MyWidget w; //创建一个自定义窗口对象（实例化对象）
    w.show();   //窗口对象默认不会弹出，需要调用show函数显示

    return a.exec();    //进入消息循环机制  阻塞代码
}
