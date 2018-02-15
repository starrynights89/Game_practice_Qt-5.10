#include "tictactoewidget.h"

TicTacToeWidget::TicTacToeWidget(QWidget *parent)
    : QWidget(parent)
{
    setupBoard();
}

TicTacToeWidget::~TicTacToeWidget()
{
}

void TicTacToeWidget::setupBoard()
{
    QGridLayout *gridLayout = new QGridLayout;
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
        }
    }
    setLayout(gridLayout);
}
