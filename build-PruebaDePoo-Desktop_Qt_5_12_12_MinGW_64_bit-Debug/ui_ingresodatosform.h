/********************************************************************************
** Form generated from reading UI file 'ingresodatosform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGRESODATOSFORM_H
#define UI_INGRESODATOSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IngresoDatosForm
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpinBox *spinBoxNota1;
    QSpinBox *spinBoxNota2;
    QLineEdit *lineEditNombres;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButtonAgregar;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditApellidos;

    void setupUi(QWidget *IngresoDatosForm)
    {
        if (IngresoDatosForm->objectName().isEmpty())
            IngresoDatosForm->setObjectName(QString::fromUtf8("IngresoDatosForm"));
        IngresoDatosForm->resize(240, 280);
        gridLayout_2 = new QGridLayout(IngresoDatosForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(IngresoDatosForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinBoxNota1 = new QSpinBox(groupBox);
        spinBoxNota1->setObjectName(QString::fromUtf8("spinBoxNota1"));
        spinBoxNota1->setMaximum(50);

        gridLayout->addWidget(spinBoxNota1, 2, 2, 1, 1);

        spinBoxNota2 = new QSpinBox(groupBox);
        spinBoxNota2->setObjectName(QString::fromUtf8("spinBoxNota2"));
        spinBoxNota2->setMaximum(50);

        gridLayout->addWidget(spinBoxNota2, 3, 2, 1, 1);

        lineEditNombres = new QLineEdit(groupBox);
        lineEditNombres->setObjectName(QString::fromUtf8("lineEditNombres"));

        gridLayout->addWidget(lineEditNombres, 0, 1, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        pushButtonAgregar = new QPushButton(groupBox);
        pushButtonAgregar->setObjectName(QString::fromUtf8("pushButtonAgregar"));

        gridLayout->addWidget(pushButtonAgregar, 4, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditApellidos = new QLineEdit(groupBox);
        lineEditApellidos->setObjectName(QString::fromUtf8("lineEditApellidos"));

        gridLayout->addWidget(lineEditApellidos, 1, 1, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(IngresoDatosForm);

        QMetaObject::connectSlotsByName(IngresoDatosForm);
    } // setupUi

    void retranslateUi(QWidget *IngresoDatosForm)
    {
        IngresoDatosForm->setWindowTitle(QApplication::translate("IngresoDatosForm", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("IngresoDatosForm", "Ingreso de Datos", nullptr));
        label_3->setText(QApplication::translate("IngresoDatosForm", "Nota Primer Parcial:", nullptr));
        label_4->setText(QApplication::translate("IngresoDatosForm", "Nota Segundo Parcial:", nullptr));
        pushButtonAgregar->setText(QApplication::translate("IngresoDatosForm", "Agregar", nullptr));
        label->setText(QApplication::translate("IngresoDatosForm", "Nombres y Apellidos:", nullptr));
        label_2->setText(QApplication::translate("IngresoDatosForm", "Apellidos:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IngresoDatosForm: public Ui_IngresoDatosForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGRESODATOSFORM_H
