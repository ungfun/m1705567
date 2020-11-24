#include <score.h>
#include <QFont>

Score::Score(QGraphicsItem *parent): QGraphicsTextItem (parent)
{
    score = 0;
    setPlainText(QString("Счет: ")+QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
    setPos(140, 0);
}

void Score::increase()
{
    score++;
    setPlainText(QString("Счет: ")+QString::number(score));
}

int Score::getScore()
{
    return score;
}
