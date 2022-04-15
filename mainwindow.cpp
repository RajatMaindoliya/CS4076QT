#include "ZorkUL.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "text.h"
#include <QString>

mainwindow::mainwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
    Zork = new ZorkUL();
    ui->OutputWindow->setVisible(true);
    ui->OutputWindow->setText(toQString(text::welcome));
}

mainwindow::~mainwindow()
{
    delete ui;
}

QString mainwindow::toQString(string s)
{
    QString str = QString::fromUtf8(s.c_str());
    return str;
}


void mainwindow::on_Map_released()
{
    ui->OutputWindow->setText(toQString(text::Map));
}


void mainwindow::on_North_released()
{
    Zork->go("north");
         ui->OutputWindow->setText(QString::fromStdString(Zork->currentRoom->longDescription()));
}


void mainwindow::on_West_released()
{
    Zork->go("west");
         ui->OutputWindow->setText(QString::fromStdString(Zork->currentRoom->longDescription()));
}


void mainwindow::on_East_released()
{
    Zork->go("east");
         ui->OutputWindow->setText(QString::fromStdString(Zork->currentRoom->longDescription()));
}


void mainwindow::on_South_released()
{
    Zork->go("south");
         ui->OutputWindow->setText(QString::fromStdString(Zork->currentRoom->longDescription()));
}

