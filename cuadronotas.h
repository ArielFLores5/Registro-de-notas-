#ifndef CUADRONOTAS_H
#define CUADRONOTAS_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include "ingresodatosform.h"
#include "estudiante.h"
#include "acercadeform.h"

namespace Ui {
class CuadroNotas;
}

class CuadroNotas : public QMainWindow
{
    Q_OBJECT

public:
    explicit CuadroNotas(QWidget *parent = nullptr);

    ~CuadroNotas();
public slots:
        void mostrarAcercaDeForm();

private slots:
    void on_actionIngresar_Datos_triggered();
    void registrarEstudiante(const QString& nombres, const QString& apellidos, int nota1, int nota2);
    void guardarEnCSV();
    void cargarDesdeCSV();
    void on_actionArchivos_triggered();

    void on_actionCargar_Datos_triggered();

    void on_actionLinks_triggered();

private:
    Ui::CuadroNotas *ui;
    AcercaDeForm* acercaDeForm;
};

#endif // CUADRONOTAS_H
