#include <QCoreApplication>
#include <QMap>
#include "pet.h"

typedef QMap<QString, Pet*> petList;

petList createPets(int max)
{
    petList map;
    for(int i = 0; i < max; i++)
    {
        QString id = QString::number(i);
        Pet* pet = new Pet(); //notice the possible memory leak!
        pet->setAge(i * 3);
        pet->setName("Pet:" + id);
        map.insert(id, pet);
    }
    return map;
}

void listPets(petList pets)
{
    foreach(QString key, pets.keys())
    {
        Pet* pet = pets.value(key);
        qInfo() << key << pet->name() << " is Age: " << pet->age();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    petList pets = createPets(5);
    qInfo() << "Count :" << pets.count();
    listPets(pets);

    Pet* pet = new Pet();
    pet->setAge(99);
    pet->setName("BadKitty");
    pets.insert("1", pet);
    qInfo() << "Count :" << pets.count();
    listPets(pets);


    qDeleteAll(pets.values());
    pets.clear();

    return a.exec();
}
