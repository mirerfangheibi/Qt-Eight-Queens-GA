#include "eightqueens.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EightQueens w;
    w.QMainWindow::show();

    return a.exec();
}
