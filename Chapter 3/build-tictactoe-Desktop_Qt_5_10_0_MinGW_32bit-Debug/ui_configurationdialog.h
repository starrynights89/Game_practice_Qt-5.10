/********************************************************************************
** Form generated from reading UI file 'configurationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATIONDIALOG_H
#define UI_CONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ConfigurationDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *player1Name;
    QLineEdit *lineEdit_2;
    QLabel *player2Name;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigurationDialog)
    {
        if (ConfigurationDialog->objectName().isEmpty())
            ConfigurationDialog->setObjectName(QStringLiteral("ConfigurationDialog"));
        ConfigurationDialog->resize(254, 108);
        gridLayout = new QGridLayout(ConfigurationDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        player1Name = new QLabel(ConfigurationDialog);
        player1Name->setObjectName(QStringLiteral("player1Name"));

        gridLayout->addWidget(player1Name, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(ConfigurationDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        player2Name = new QLabel(ConfigurationDialog);
        player2Name->setObjectName(QStringLiteral("player2Name"));

        gridLayout->addWidget(player2Name, 1, 0, 1, 1);

        lineEdit = new QLineEdit(ConfigurationDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ConfigurationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        player1Name->setBuddy(lineEdit);
        player2Name->setBuddy(lineEdit_2);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, lineEdit_2);

        retranslateUi(ConfigurationDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigurationDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigurationDialog, SLOT(accept()));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), ConfigurationDialog, SLOT(updateOKButtonState()));
        QObject::connect(lineEdit_2, SIGNAL(textChanged(QString)), ConfigurationDialog, SLOT(updateOKButtonState()));

        QMetaObject::connectSlotsByName(ConfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigurationDialog)
    {
        ConfigurationDialog->setWindowTitle(QApplication::translate("ConfigurationDialog", "Dialog", nullptr));
        player1Name->setText(QApplication::translate("ConfigurationDialog", "Player &1 Name:", nullptr));
        player2Name->setText(QApplication::translate("ConfigurationDialog", "Player &2 Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigurationDialog: public Ui_ConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATIONDIALOG_H
