#include "cat.h"

Cat::Cat(QObject *parent)
    : QObject{parent}
{

}

void Cat::scared()
{
    qInfo() << "scared, running for my life";
    emit run();
}
