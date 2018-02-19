#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionNewGame, SIGNAL(triggered()), this, SLOT(startNewGame()));
    connect(ui->actionQuit, SIGNAL(triggered()), qApp, SLOT(quit()));
    connect(ui->gameBoard, SIGNAL(currentPlayerChanged(Player)), this, 
    SLOT (updateNameLabels()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startNewGame()
{
    ConfigurationDialog dlg(this);
    if(dlg.exec() == QDialog::Rejected)
    {
        return; //do nothing if dialog rejected
    }
    ui->player1->setText(dlg.player1Name());
    ui->player2->setText(dlg.player2Name());
    ui->gameBoard->initNewGame();
    ui->gameBoard->setEnabled(true);
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::updateNameLabels()
{
    QFont f = ui->player1->font();
    f.setBold(ui->gameBoard->currentPlayer() == TicTacToeWidget::Player1);
    ui->player1->setFont(f);
    f.setBold(ui->gameBoard->currentPlayer() == TicTacToeWidget::Player2);
    ui->player2->setFont(f);
}