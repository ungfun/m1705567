#include "game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include "vrag.h"
#include <QBrush>
#include <QImage>
#include "lives.h"
#include "gameover.h"

gameover * gameover;

Game::Game(QWidget *parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);

    setBackgroundBrush(QBrush(QImage(":/images/bc.png")));

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    igrok = new Igrok();
    igrok->setPos(300,500);
    scene->addItem(igrok);
    igrok->setFlag(QGraphicsItem::ItemIsFocusable);
    igrok->setFocus();

    score = new Score();
    scene->addItem(score);

    lives = new Lives();
    lives->setPos(lives->x(),lives->y()+25);
    scene->addItem(lives);

    timer=new QTimer();
    QObject::connect(timer,SIGNAL(timeout()), igrok, SLOT(spawn()));
    timer->start(2000);
}




