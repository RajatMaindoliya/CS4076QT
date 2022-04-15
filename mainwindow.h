#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ZorkUL.h"
#include <QString>

#include <QDialog>

namespace Ui {
class mainwindow;
}

class mainwindow : public QDialog
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

private slots:

    void on_Map_released();

    void on_North_released();

    void on_West_released();

    void on_East_released();

    void on_South_released();

private:
    Ui::mainwindow *ui;
    ZorkUL *Zork;
    QString toQString(string s);
};

#endif // MAINWINDOW_H
