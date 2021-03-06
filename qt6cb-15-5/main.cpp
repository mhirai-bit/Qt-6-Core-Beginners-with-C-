#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString greeting = "Hello World!";
    QByteArray buffer(greeting.toUtf8());
    buffer.append("!");
    qInfo() << buffer;

    qInfo() << buffer.rightJustified(20, '.');
    qInfo() << buffer.at(buffer.length() - 1);

    QString modified(buffer);
    qInfo() << modified;

    //Basic engoding and deconding
    qInfo() << buffer.toBase64();
    qInfo() << buffer.toHex();

    return a.exec();
}
