#include <lives.h>
#include <QFont>
#include <QTimer>
#include <QMessageBox>


Lives::Lives(QGraphicsItem *parent): QGraphicsTextItem (parent)
{
    lives = 3;
    setPlainText(QString("Жизни: ")+QString::number(lives));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
    setPos(140,0);
}

void Lives::decrease()
{
    lives--;
    setPlainText(QString("Жизни: ")+QString::number(lives));
}

int Lives::getLives()
{
    return lives;
}
