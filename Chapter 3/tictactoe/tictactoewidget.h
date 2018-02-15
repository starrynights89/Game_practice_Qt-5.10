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
        Invalid, Player1, Player2, Draw
    };
    Player currentPlayer() const { return m_currentPlayer; }
    void setCurrentPlayer(Player p)
    {
        if(m_currentPlayer==p) return; 
        m_currentPlayer = p;
        emit currentPlayerChanged(p);
    }
    TicTacToeWidget(QWidget *parent = 0);
    ~TicTacToeWidget();
    void initNewGame();
public slots:
    void handleButtonClick(int);
signals:
    void currentPlayerChanged(Player);
    void gameOver(TicTacToeWidget::Player);
private:
    Player m_currentPlayer;
    QList<QPushButton*> board;
    void setupBoard();
};

#endif // TICTACTOEWIDGET_H
