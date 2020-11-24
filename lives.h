#ifndef LIVES_H
#define LIVES_H

#include <QGraphicsTextItem>
#include <QMessageBox>

class Lives: public QGraphicsTextItem
{
public:
    Lives(QGraphicsItem * parent = nullptr);
    void decrease();
    bool check();
    int getLives();
private:
    int lives;
};

#endif // LIVES_H
