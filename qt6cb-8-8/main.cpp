#include <QCoreApplication>
#include <QDebug>
#include "agecalc.h"

void print(AgeCalc &calc)
{
    qInfo() << calc.name() << "Humam Years: " << calc.humanYears();
    qInfo() << calc.name() << "Dog Years: " << calc.dogYears();
    qInfo() << calc.name() << "Cat Years: " << calc.catYears();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AgeCalc bryan;
    AgeCalc tammy;

    bryan.setName("Bryan");
    bryan.setAge(46);
    tammy.setAge(27);
    tammy.setName("Tammy");

    print(bryan);
    print(tammy);


    return a.exec();
}
