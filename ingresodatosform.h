#ifndef INGRESODATOSFORM_H
#define INGRESODATOSFORM_H

#include <QDialog>
#include "acercadeform.h"

namespace Ui {
class IngresoDatosForm;
}

class IngresoDatosForm : public QDialog
{
    Q_OBJECT

public:
    explicit IngresoDatosForm(QWidget *parent = nullptr);
    ~IngresoDatosForm();

signals:
    void datosIngresados(const QString& nombres, const QString& apellidos, int nota1, int nota2);

private slots:
    void on_pushButtonAgregar_clicked();

private:
    Ui::IngresoDatosForm *ui;
};

#endif // INGRESODATOSFORM_H
