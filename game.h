#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>
#include "Igrok.h"
#include <QTimer>
#include "score.h"
#include "lives.h"
#include <QMessageBox>

class Game: public QGraphicsView
{
public:
    Game(QWidget * parent = nullptr);
    QGraphicsScene * scene;
    Igrok * igrok;
    QTimer * timer;
    Score * score;
    Lives * lives;
};

#endif // GAME_H
