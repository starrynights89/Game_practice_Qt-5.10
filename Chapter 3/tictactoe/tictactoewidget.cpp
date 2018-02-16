#include "tictactoewidget.h"

TicTacToeWidget::TicTacToeWidget(QWidget *parent)
    : QWidget(parent)
{
    setupBoard();
}

TicTacToeWidget::~TicTacToeWidget()
{
}

void TicTacToeWidget::initNewGame()
{
    for(int i=0; i<9; i++)
    {
        board.at(i)->setText(" ");
    }
}

TicTacToeWidget::Player TicTacToeWidget::checkWinCondition(int row, int column) const
{
    QString current = board.at(row * 3 + column)->text();
    int count = 0;
    //check horizontal sequence 
    for(int c = 0; c < 3; c++)
    {
        if(board.at(row*3+c)->text()==current)
        {
            count++;
        }
    }
    if(count==3) return currentPlayer();
    count = 0;
    //check vertical sequence
    for(int r = 0; r < 3; r++)
    {
        if(board.at(r*3+column)->text()==current)
        {
            count++;
        }
    }
    if(count == 3) return currentPlayer();
    //if the move was done on diagonal, check the diagonal 
    count = 0;
    if(row == column)
    {
        for(int c = 0; c < 3; c++)
        {
            if(board.at(c*3+c)->text() == current)
            {
                count++;
            }
        }
        if(count == 3) return currentPlayer();
    }
    count = 0;
    if(row + column == 2)
    {
        for(int c = 0; c < 3; c++)
        {
            if(board.at((2-c)*3+c)->text() == current)
            {
                count++;
            }
        }
        if(count == 3) return currentPlayer();
    }

    //check if there are unoccupied fields left
    foreach(QPushButton *button, board) if(button->text() == " ") return Invalid;
    return Draw;
}

void TicTacToeWidget::handleButtonClick(int index)
{
    //out of bounds check
    if(index < 0 || index >= board.size()) return; 
    QPushButton *button = board.at(index);
    if(button->text()!="") return; //invalid move
    button->setText(currentPlayer()==Player1 ?"X":"O");
    Player winner = checkWinCondition(index / 3, index % 3);
    if(winner==Invalid)
    {
        setCurrentPlayer(currentPlayer()==Player1 ? Player2 : Player1);
        return;
    }
    else
    {
        emit gameOver(winner);
    }
}

void TicTacToeWidget::setupBoard()
{
    QGridLayout *gridLayout = new QGridLayout;
    QSignalMapper *mapper = new QSignalMapper(this);
    for(int row = 0; row < 3; row++)
    {
        for(int column = 0; column < 3; column++)
        {
            QPushButton *button = new QPushButton;

            button->setSizePolicy(QSizePolicy::Minimum,
            QSizePolicy::Minimum);
            button->setText(" ");
            gridLayout->addWidget(button, row, column);
            board.append(button);
            mapper->setMapping(button, board.count()-1);
            connect(button, SIGNAL(clicked()), mapper, SLOT(map()));
        }
    }
    connect(mapper, SIGNAL(mapped(int)), this, SLOT(handleButtonClick(int)));
    setLayout(gridLayout);
}
