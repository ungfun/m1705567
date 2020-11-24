#include "igrok.h"
#include <QKeyEvent>
#include "pulya.h"
#include <QGraphicsScene>
#include "vrag.h"


Igrok::Igrok(QGraphicsItem *parent): QGraphicsPixmapItem ()
{
    setPixmap(QPixmap(":/images/igrok.png"));
}

void Igrok::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Left)
    {
        if(pos().x()>0)
        setPos(x()-10,y());
    }
    else if(event->key()==Qt::Key_Right)
    {
        if(pos().x()+300<800)
        setPos(x()+10,y());
    }
    else if(event->key()==Qt::Key_Space)
    {
        pulya = new Pulya();
        pulya->setPos(x(),y());
        scene()->addItem(pulya);
    }
}

void Igrok::spawn()
{
    Vrag * vrag =new Vrag();
    scene()->addItem(vrag);
}
