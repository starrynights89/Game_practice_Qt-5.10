#include "tictactoewidget.h"
#include "configurationdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TicTacToeWidget w;
    w.show();
    ConfigurationDialog dialog;
    dialog.show();
    return a.exec();
}
