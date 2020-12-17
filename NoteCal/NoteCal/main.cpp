#include "notecal.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NoteCal w;
    w.show();
    return a.exec();
}
