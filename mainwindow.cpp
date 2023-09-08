#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    categoriesName.insert("овощи");
    categoriesName.insert("фрукты");
    categoriesName.insert("рыбы");
    for(QString el:categoriesName){
        ui->add_cat->addItem(el);
        ui->addpozcat->addItem(el);
        ui->remove_cat->addItem(el);
        ui->cat->addItem(el);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}




