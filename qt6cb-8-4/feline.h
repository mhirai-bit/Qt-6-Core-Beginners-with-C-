#ifndef FELINE_H
#define FELINE_H
#include "mammal.h"
#include <QDebug>
#include <QObject>

class Feline : public Mammal
{
    Q_OBJECT
public:
    explicit Feline(QObject *parent = nullptr);
    void meow() {qInfo() << "meow!";}

signals:

};

#endif // FELINE_H
