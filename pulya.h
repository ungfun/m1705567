#ifndef PULYA_H
#define PULYA_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Pulya: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Pulya(QGraphicsItem * parent = nullptr);
    QTimer * timer;
public slots:
    void move();

};

#endif // PULYA_H
