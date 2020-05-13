#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setWindowTitle("test for ils");
}

MainWindow::~MainWindow()
{
    delete ui;
}
