#ifndef MONSTER_H
#define MONSTER_H

#include <QDebug>
#include <QObject>
#include "feline.h"
#include "canine.h"

class Monster : public QObject, Feline, Canine
{
    Q_OBJECT
public:
    explicit Monster(QObject *parent = nullptr);

signals:

};

#endif // MONSTER_H
