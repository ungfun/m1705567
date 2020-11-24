#ifndef START_H
#define START_H

#include <QDialog>

namespace Ui {
class Start;
}

class Start : public QDialog
{
    Q_OBJECT

public:
    explicit Start(QWidget *parent = nullptr);
    ~Start();

private slots:
    void on_StartButton_clicked();

    void on_ExitButton_clicked();

private:
    Ui::Start *ui;
};

#endif // START_H
