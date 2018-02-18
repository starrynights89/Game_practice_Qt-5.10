#include "tictactoewidget.h"
#include "configurationdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    TicTacToeWidget w;
    w.show();
    ConfigurationDialog dialog;
    dialog.show();
    return app.exec();
}
