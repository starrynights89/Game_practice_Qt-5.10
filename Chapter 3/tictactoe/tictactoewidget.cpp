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
    setLayout(gridLayout);
}