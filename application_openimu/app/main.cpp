#include "widget.h"
#include <QApplication>
#include <QMainWindow>
#include <QMenuBar>
#include <QVBoxLayout>
#include "applicationmenubar.h"
#include "mainwindow.h"
#include "models/caneva.h"

int main(int argc, char *argv[])
{
    Caneva::getInstance();
    QApplication a(argc, argv);

    MainWindow *window = new MainWindow();
    window->show();

    return a.exec();
}