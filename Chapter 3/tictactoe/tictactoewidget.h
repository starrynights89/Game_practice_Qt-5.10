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
    enum Player
    {
        Invalid, Player 1, Player 2, Draw
    };
    TicTacToeWidget(QWidget *parent = 0);
    ~TicTacToeWidget();
    void initNewGame();
private:
    Player m_currentPlayer;
    QList<QPushButton*> board;
    void setupBoard();
};

#endif // TICTACTOEWIDGET_H
