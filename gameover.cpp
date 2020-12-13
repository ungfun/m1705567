#include "gameover.h"
#include "ui_gameover.h"
#include "game.h"

extern Game * game;

gameover::gameover(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameover)
{
    ui->setupUi(this);
}

gameover::~gameover()
{
    delete ui;
}

void gameover::on_NewGameButton_clicked()
{
    this->close();
    game=new Game();
    game->show();
}

void gameover::on_ExitButton_clicked()
{
    qApp->exit();
}


