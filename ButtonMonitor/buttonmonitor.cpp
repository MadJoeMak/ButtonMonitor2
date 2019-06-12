#include "buttonmonitor.h"
#include <wiringPi.h>
#include <QTimer>

const int bn1 = 17;
const int bn2 = 27;
const int bn3 = 22;

ButtonMonitor::ButtonMonitor(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);
    wiringPiSetupGpio();
        pinMode(bn1, INPUT);
        pinMode(bn2, INPUT);
        pinMode(bn3, INPUT);

        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(update()));
        timer->start(100);
}

void ButtonMonitor::update()
{
    if(digitalRead(22) == 0)
    {
        btn1->setText("FirstButton: 1");
        btn1->setStyleSheet("background-color:red;");
    }
    else
    {
        btn1->setText("FirstButton: 0");
        btn1->setStyleSheet("background-color:black;");
    };

    if(digitalRead(27) == 0)
    {
        btn2->setText("FirstButton: 1");
        btn2->setStyleSheet("background-color:red;");
    }
    else
    {
        btn2->setText("FirstButton: 0");
        btn2->setStyleSheet("background-color:black;");
    };

    if(digitalRead(17) == 0)
    {
        btn3->setText("FirstButton: 1");
        btn3->setStyleSheet("background-color:red;");
    }
    else
    {
        btn3->setText("FirstButton: 0");
        btn3->setStyleSheet("background-color:black;");
    };
}
