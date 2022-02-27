#ifndef PET_H
#define PET_H

#include <QObject>

class Pet : public QObject
{
    Q_OBJECT
    int m_age;
    QString m_name;
public:
    Pet();
    const QString &name() const;
    void setName(const QString &newName);
    int age() const;
    void setAge(int newAge);
};

#endif // PET_H
