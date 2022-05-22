#include <QCoreApplication>
#include <QRandomGenerator>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    const int minIntegerValue = -5;
    const int maxIntegerValue = 6;
    for (int i = 0; i < 100; ++i)
    {
        const int generatedValue = QRandomGenerator::global()->bounded(minIntegerValue, maxIntegerValue);
        qDebug() << "generated value:" << generatedValue;
    }
    return a.exec();
}
