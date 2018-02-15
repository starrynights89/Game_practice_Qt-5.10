#ifndef TICTACTOEWIDGET_H
#define TICTACTOEWIDGET_H
#include <QWidget>
class QPushButton;

class TicTacToeWidget : public QWidget
{
    Q_OBJECT

public:
    TicTacToeWidget(QWidget *parent = 0);
    ~TicTacToeWidget();
private:
    QList<QPushButton*> board;
};

#endif // TICTACTOEWIDGET_H
