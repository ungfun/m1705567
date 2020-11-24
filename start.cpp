#include "start.h"
#include "ui_start.h"
#include "game.h"

extern Game * game;
Start * start;

Start::Start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Start)
{
    ui->setupUi(this);
}

Start::~Start()
{
    delete ui;
}

void Start::on_StartButton_clicked()
{
    hide();
    game=new Game();
    game->show();
}

void Start::on_ExitButton_clicked()
{
    this->close();
}
