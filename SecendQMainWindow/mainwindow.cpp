#include "mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(600,400);
    //菜单栏（只有一个）,创建一个菜单栏
    QMenuBar * bar = menuBar();
    //将菜单栏设置到窗口中
    setMenuBar(bar);
    //设置菜单（若不设置则不会显示菜单栏）
    QMenu * fileMenu = bar->addMenu("文件");
    //添加菜单项
    QAction * newAction = fileMenu->addAction("新建");
    //添加分割线
    fileMenu->addSeparator();
    QAction * openAction = fileMenu->addAction("打开");

    //工具栏，可以有多个工具栏（QtoolBar）
    QToolBar * toolBar = new QToolBar(this);
    //将工具栏放入窗口中
    addToolBar(Qt::LeftToolBarArea,toolBar);
    //工具栏中添加小控件（按钮）
    QPushButton * btn = new QPushButton("按钮",this);
    toolBar->addWidget(btn);
    //工具栏中加菜单项
    toolBar->addAction(newAction);
    //添加分割线
    toolBar->addSeparator();
}

MainWindow::~MainWindow()
{

}
