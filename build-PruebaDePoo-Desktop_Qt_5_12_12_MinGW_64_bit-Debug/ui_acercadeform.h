/********************************************************************************
** Form generated from reading UI file 'acercadeform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACERCADEFORM_H
#define UI_ACERCADEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AcercaDeForm
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *AcercaDeForm)
    {
        if (AcercaDeForm->objectName().isEmpty())
            AcercaDeForm->setObjectName(QString::fromUtf8("AcercaDeForm"));
        AcercaDeForm->resize(245, 101);
        gridLayout = new QGridLayout(AcercaDeForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(AcercaDeForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(AcercaDeForm);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pushButton = new QPushButton(AcercaDeForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        retranslateUi(AcercaDeForm);

        QMetaObject::connectSlotsByName(AcercaDeForm);
    } // setupUi

    void retranslateUi(QWidget *AcercaDeForm)
    {
        AcercaDeForm->setWindowTitle(QApplication::translate("AcercaDeForm", "Form", nullptr));
        label_2->setText(QApplication::translate("AcercaDeForm", "Ariel Flores", nullptr));
        label->setText(QApplication::translate("AcercaDeForm", "Link a GitHub:", nullptr));
        pushButton->setText(QApplication::translate("AcercaDeForm", "Ir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AcercaDeForm: public Ui_AcercaDeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACERCADEFORM_H
