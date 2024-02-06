#ifndef CUADRONOTAS_H
#define CUADRONOTAS_H

#include <QMainWindow>
#include "ingresodatosform.h"
#include "estudiante.h"

namespace Ui {
class CuadroNotas;
}

class CuadroNotas : public QMainWindow
{
    Q_OBJECT

public:
    explicit CuadroNotas(QWidget *parent = nullptr);
    ~CuadroNotas();

private slots:
    void on_actionIngresar_Datos_triggered();
    void registrarEstudiante(const QString& nombres, const QString& apellidos, int nota1, int nota2);
    void guardarEnCSV();
    void on_actionArchivos_triggered();

private:
    Ui::CuadroNotas *ui;
};

#endif // CUADRONOTAS_H
