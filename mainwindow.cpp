#include "mainwindow.h"
#include "ui_mainwindow.h"



#include "locale.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LanguageDatabase localeDatabase;
    localeDatabase.createDatabase();
}

MainWindow::~MainWindow()
{
    delete ui;
}

