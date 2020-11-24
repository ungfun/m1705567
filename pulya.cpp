#include "pulya.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "vrag.h"
#include "game.h"
#include <QObject>

extern Game * game;

Pulya::Pulya(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/pulya.png"));
    setTransformOriginPoint(50,25);
    setRotation(180);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);
}

void Pulya::move()
{
    QList<QGraphicsItem *>colliding_items=collidingItems();
    for(int i=0, n=colliding_items.size();i<n;i++)
    {
        if (typeid(*(colliding_items[i]))==typeid(Vrag))
        {
            game->score->increase();
            scene()->removeItem((colliding_items[i]));
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;
        }
    }
    setPos(x(),y()-10);
    if(pos().y()<0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
