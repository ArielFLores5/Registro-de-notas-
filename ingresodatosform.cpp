#include "ingresodatosform.h"
#include "ui_ingresodatosform.h"

IngresoDatosForm::IngresoDatosForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IngresoDatosForm)
{
    ui->setupUi(this);
}

IngresoDatosForm::~IngresoDatosForm()
{
    delete ui;
}

void IngresoDatosForm::on_pushButtonAgregar_clicked()
{
    QString nombres = ui->lineEditNombres->text();
    QString apellidos = ui->lineEditApellidos->text();
    int nota1 = ui->spinBoxNota1->value();
    int nota2 = ui->spinBoxNota2->value();
    if (nombres.isEmpty() || apellidos.isEmpty() || nota1 < 0 || nota1 > 50 || nota2 < 0 || nota2 > 60) {
        return;
    }
    emit datosIngresados(nombres, apellidos, nota1, nota2);
    this->accept();
}
