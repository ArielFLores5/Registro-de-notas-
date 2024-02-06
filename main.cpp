#include "cuadronotas.h"
#include "QTranslator"
#include <QApplication>
#include <QInputDialog>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator traduccion;
    QStringList idiomas;
    idiomas << "Spanish" <<"France";
    QString idiomaSeleccionado = QInputDialog::getItem(nullptr,
                                                      "language",
                                                      "Select a Language",
                                                      idiomas);

    if (idiomaSeleccionado == "France") {
        traduccion.load(":/fr_FR.qm");
        a.installTranslator(&traduccion);
    }


    CuadroNotas w;
    w.show();
    return a.exec();
}

