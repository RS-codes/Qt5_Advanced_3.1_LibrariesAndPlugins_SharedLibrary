#include <QCoreApplication>

/*
Add this to the project file to get rid of the compile issues
CONFIG+=ordered
*/

#include "../mylib/mylib_global.h"
#include "../mylib/mylib.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Mylib mylib;
    mylib.test();

    //some change

    return a.exec();
}
