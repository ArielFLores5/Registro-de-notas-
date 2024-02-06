/********************************************************************************
** Form generated from reading UI file 'cuadronotas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUADRONOTAS_H
#define UI_CUADRONOTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CuadroNotas
{
public:
    QAction *actionArchivos;
    QAction *actionLinks;
    QAction *actionIngresar_Datos;
    QAction *actionCargar_Datos;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menuNuevo;
    QMenu *menuAcerca_de;
    QMenu *menuDatos;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CuadroNotas)
    {
        if (CuadroNotas->objectName().isEmpty())
            CuadroNotas->setObjectName(QString::fromUtf8("CuadroNotas"));
        CuadroNotas->resize(800, 600);
        actionArchivos = new QAction(CuadroNotas);
        actionArchivos->setObjectName(QString::fromUtf8("actionArchivos"));
        actionLinks = new QAction(CuadroNotas);
        actionLinks->setObjectName(QString::fromUtf8("actionLinks"));
        actionIngresar_Datos = new QAction(CuadroNotas);
        actionIngresar_Datos->setObjectName(QString::fromUtf8("actionIngresar_Datos"));
        actionCargar_Datos = new QAction(CuadroNotas);
        actionCargar_Datos->setObjectName(QString::fromUtf8("actionCargar_Datos"));
        centralwidget = new QWidget(CuadroNotas);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        CuadroNotas->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CuadroNotas);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuNuevo = new QMenu(menubar);
        menuNuevo->setObjectName(QString::fromUtf8("menuNuevo"));
        menuAcerca_de = new QMenu(menubar);
        menuAcerca_de->setObjectName(QString::fromUtf8("menuAcerca_de"));
        menuDatos = new QMenu(menubar);
        menuDatos->setObjectName(QString::fromUtf8("menuDatos"));
        CuadroNotas->setMenuBar(menubar);
        statusbar = new QStatusBar(CuadroNotas);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CuadroNotas->setStatusBar(statusbar);

        menubar->addAction(menuNuevo->menuAction());
        menubar->addAction(menuDatos->menuAction());
        menubar->addAction(menuAcerca_de->menuAction());
        menuNuevo->addAction(actionIngresar_Datos);
        menuAcerca_de->addAction(actionLinks);
        menuDatos->addAction(actionArchivos);
        menuDatos->addAction(actionCargar_Datos);

        retranslateUi(CuadroNotas);

        QMetaObject::connectSlotsByName(CuadroNotas);
    } // setupUi

    void retranslateUi(QMainWindow *CuadroNotas)
    {
        CuadroNotas->setWindowTitle(QApplication::translate("CuadroNotas", "CuadroNotas", nullptr));
        actionArchivos->setText(QApplication::translate("CuadroNotas", "Guardar Datos", nullptr));
#ifndef QT_NO_SHORTCUT
        actionArchivos->setShortcut(QApplication::translate("CuadroNotas", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionLinks->setText(QApplication::translate("CuadroNotas", "Link a GitHub", nullptr));
        actionIngresar_Datos->setText(QApplication::translate("CuadroNotas", "Ingresar Datos", nullptr));
#ifndef QT_NO_SHORTCUT
        actionIngresar_Datos->setShortcut(QApplication::translate("CuadroNotas", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionCargar_Datos->setText(QApplication::translate("CuadroNotas", "Cargar Datos", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCargar_Datos->setShortcut(QApplication::translate("CuadroNotas", "Ctrl+\303\221", nullptr));
#endif // QT_NO_SHORTCUT
        menuNuevo->setTitle(QApplication::translate("CuadroNotas", "Nuevo", nullptr));
        menuAcerca_de->setTitle(QApplication::translate("CuadroNotas", "Acerca de", nullptr));
        menuDatos->setTitle(QApplication::translate("CuadroNotas", "Datos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CuadroNotas: public Ui_CuadroNotas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUADRONOTAS_H
