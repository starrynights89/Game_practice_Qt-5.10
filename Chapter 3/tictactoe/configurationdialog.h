#ifndef CONFIGURATIONDIALOG_H
#define CONFIGURATIONDIALOG_H

#include <QDialog>

namespace Ui {
class ConfigurationDialog;
}

class ConfigurationDialog : public QDialog
{
    Q_OBJECT
    Q_PROPERTY(QString player1Name READ player1Name WRITE setPlayer1Name)
    Q_PROPERTY(QString player2Name READ player2Name WRITE setPlayer2Name)

public:
    explicit ConfigurationDialog(QWidget *parent = 0);
    ~ConfigurationDialog();

    QString player1Name() const;
    QString player2Name() const;

public slots:
    void updateOKButtonState();
    void setPlayer1Name(const QString &p1name);
    void setPlayer2Name(const QString &p2name);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ConfigurationDialog *ui;
};

#endif // CONFIGURATIONDIALOG_H
