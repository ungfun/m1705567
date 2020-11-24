#ifndef IGROK_H
#define IGROK_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include "pulya.h"

class Igrok: public QObject, public QGraphicsPixmapItem{
Q_OBJECT
public:
    Igrok(QGraphicsItem * parent = nullptr);
    void keyPressEvent(QKeyEvent * event);
    Pulya * pulya;
public slots:
    void spawn();
};

#endif // IGROK_H
