#include "cuadronotas.h"
#include "ui_cuadronotas.h"

CuadroNotas::CuadroNotas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CuadroNotas)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(6);
    QStringList headers = {"Nombres", "Nota 1 Parcial", "Nota 2 Parcial", "Nota Final", "Estado", "Nota Remedial Minima"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
}

CuadroNotas::~CuadroNotas()
{
    delete ui;
}

void CuadroNotas::on_actionIngresar_Datos_triggered()
{
    IngresoDatosForm *ingresoDatosForm = new IngresoDatosForm(this);
    connect(ingresoDatosForm, &IngresoDatosForm::datosIngresados, this, &CuadroNotas::registrarEstudiante);

    // Mostrar la ventana de ingreso de datos
    ingresoDatosForm->exec();
}

void CuadroNotas::registrarEstudiante(const QString& nombres, const QString& apellidos, int nota1, int nota2) {
    float notaFinal = static_cast<float>(nota1) + static_cast<float>(nota2);
    QString estado;
    if (notaFinal >= 70) {
        estado = "Aprobado";
    } else if (notaFinal >= 25) {
        estado = "Remedial";
    } else {
        estado = "Reprobado";
    }

    // Agregar los datos a la tabla
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);
    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(nombres));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(nota1)));
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(nota2)));
    ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(notaFinal)));
    ui->tableWidget->setItem(row, 4, new QTableWidgetItem(estado));
    ui->tableWidget->setItem(row, 5, new QTableWidgetItem(""));
}
