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

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *player1Name;
    QLineEdit *lineEdit_2;
    QLabel *player2Name;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(254, 108);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        player1Name = new QLabel(Dialog);
        player1Name->setObjectName(QStringLiteral("player1Name"));

        gridLayout->addWidget(player1Name, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        player2Name = new QLabel(Dialog);
        player2Name->setObjectName(QStringLiteral("player2Name"));

        gridLayout->addWidget(player2Name, 1, 0, 1, 1);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        player1Name->setBuddy(lineEdit);
        player2Name->setBuddy(lineEdit_2);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, lineEdit_2);

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), Dialog, SLOT(updateOKButtonState()));
        QObject::connect(lineEdit_2, SIGNAL(textChanged(QString)), Dialog, SLOT(updateOKButtonState()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        player1Name->setText(QApplication::translate("Dialog", "Player &1 Name:", nullptr));
        player2Name->setText(QApplication::translate("Dialog", "Player &2 Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATIONDIALOG_H
