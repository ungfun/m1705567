#include "vrag.h"
#include <QTimer>
#include <QGraphicsScene>
#include <stdlib.h>
#include "game.h"
#include "lives.h"
#include "gameover.h"
#include "igrok.h"
#include "pulya.h"

extern Game * game;
gameover * gameisover;
Igrok * igrok;
int n=0;

Vrag::Vrag(QGraphicsItem *parent): QObject (), QGraphicsPixmapItem(parent)
{
    int random_number=rand()%596;
    setPos(random_number,0);
    setPixmap(QPixmap(":/images/vrag.png"));
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);
}

void Vrag::move()
{
    setPos(x(),y()+5);
    n++;
    if(pos().y()>600)
    {
        if((game->lives->getLives())>1)
        {
            game->lives->decrease();
            scene()->removeItem(this);
            delete this;
        }
        else if((game->lives->getLives())==1)
                {
                    game->lives->decrease();
                    game->timer->disconnect();
                    timer->disconnect();
                    game->close();
                    gameisover = new gameover();
                    gameisover->show();
                }
    }
}
