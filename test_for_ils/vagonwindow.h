#ifndef VAGONWINDOW_H
#define VAGONWINDOW_H

#include <QtWidgets>
#include <QtSql>

#include "ui_vagonwindow.h"

class VagonWindow: public QMainWindow
{
    Q_OBJECT
public:
    VagonWindow();

private:
    Ui::VagonWindow ui;

};

#endif // VAGONWINDOW_H
