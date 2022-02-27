#ifndef CANINE_H
#define CANINE_H
#include "mammal.h"
#include <QDebug>
#include <QObject>

class Canine : public Mammal
{
    Q_OBJECT
public:
    explicit Canine(QObject *parent = nullptr);
    void bark() {qInfo() << "bark!";}

signals:

};

#endif // CANINE_H
