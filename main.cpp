#include <QApplication>
#include "game.h"
#include "start.h"

Game * game;
extern Start * start;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    start=new Start();
    start->show();

    return a.exec();
}
