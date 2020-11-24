#ifndef VRAG_H
#define VRAG_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Vrag: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Vrag(QGraphicsItem *parent = nullptr);
    QTimer * timer;
    int n;
public slots:
    void move();
};


#endif // VRAG_H
