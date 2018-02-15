#ifndef TICTACTOEWIDGET_H
#define TICTACTOEWIDGET_H
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QSignalMapper>
class QPushButton;

class TicTacToeWidget : public QWidget
{
    Q_OBJECT

public:
    TicTacToeWidget(QWidget *parent = 0);
    ~TicTacToeWidget();
    void initNewGame();
private:
    QList<QPushButton*> board;
    void setupBoard();
};

#endif // TICTACTOEWIDGET_H
