#include "mainwindow.h"

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <iostream>
#include <cmath>
#include<ctime>
#include<random>
#include<cstdlib>
int main(int argc, char *argv[])
{
    srand(time(NULL));
    QApplication a(argc, argv);
    QWidget w;
    QPushButton But("*",&w);
    But.setGeometry(10,10,100,50);
    QObject::connect(&But,&QPushButton::clicked,&But,[&](){But.setGeometry((rand()+1000000)%200,(rand()+1000000)%200,25,25);});
    w.show();
    return a.exec();
}
