#include <QCoreApplication>

void test(QString name) //COPY
{
    qInfo() << name;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan Cairns";
    qInfo() << name;
    qInfo() << name.mid(3,2);
    qInfo() << name.insert(0, "Mr. ");
    qInfo() << name.split(" ");

    int index = name.indexOf(".");
    if (index > -1)
    {
        qInfo() << name.remove(0, index + 1).trimmed();
    }

    QString title = "Teacher";
    QString full = name.trimmed() + " " + title;
    qInfo() << full;

    qInfo() << full.toUtf8();

    test(full);

    return a.exec();
}
