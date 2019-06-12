#ifndef BUTTONMONITOR_H
#define BUTTONMONITOR_H

#include "ui_buttonmonitor.h"

class ButtonMonitor : public QWidget, private Ui::ButtonMonitor
{
    Q_OBJECT

public:
    explicit ButtonMonitor(QWidget *parent = 0);
    //~ButtonMonitor();
    //private slots:
    void update();
};

#endif // BUTTONMONITOR_H
