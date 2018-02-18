#ifndef CONFIGURATIONDIALOG_H
#define CONFIGURATIONDIALOG_H

#include <QDialog>

namespace Ui {
class ConfigurationDialog;
}

class ConfigurationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigurationDialog(QWidget *parent = 0);
    ~ConfigurationDialog();

    QString player1Name() const;
    QString player2Name() const;

public slots:
    void updateOKButtonState();
    void setPlayer1Name(const QString &p1name);
    void setPlayer2Name(const QString &p2name)

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ConfigurationDialog *ui;
};

#endif // CONFIGURATIONDIALOG_H
