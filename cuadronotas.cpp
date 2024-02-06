#include "cuadronotas.h"
#include "ui_cuadronotas.h"
#include "ingresodatosform.h"

#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

CuadroNotas::CuadroNotas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CuadroNotas)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(6);
    QStringList headers = {"Nombres", "Nota 1 Parcial", "Nota 2 Parcial", "Nota Final", "Estado", "Nota Remedial Minima"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    connect(ui->actionArchivos, &QAction::triggered, this, &CuadroNotas::guardarEnCSV);
}

CuadroNotas::~CuadroNotas()
{
    delete ui;
}

void CuadroNotas::on_actionIngresar_Datos_triggered()
{
    IngresoDatosForm *ingresoDatosForm = new IngresoDatosForm(this);
    connect(ingresoDatosForm, &IngresoDatosForm::datosIngresados, this, &CuadroNotas::registrarEstudiante);

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

    float notaRemedialMinima = 0.0f;
    if (estado == "Remedial") {
        notaRemedialMinima = (70.0 - 0.4 * notaFinal) / 0.6;
    }

    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);
    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(nombres));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(nota1)));
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(nota2)));
    ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(notaFinal)));
    ui->tableWidget->setItem(row, 4, new QTableWidgetItem(estado));
    ui->tableWidget->setItem(row, 5, new QTableWidgetItem(QString::number(notaRemedialMinima)));
}

void CuadroNotas::guardarEnCSV()
{

}

void CuadroNotas::on_actionArchivos_triggered()
{
    QString filePath = QFileDialog::getSaveFileName(this, tr("Guardar como CSV"), QString(), tr("Archivos CSV (*.csv)"));

    if (filePath.isEmpty()) {
        return;
    }

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, tr("Error"), tr("No se pudo abrir el archivo para escritura."));
        return;
    }

    QTextStream out(&file);
    QStringList headers;
    for (int col = 0; col < ui->tableWidget->columnCount(); ++col) {
        headers << ui->tableWidget->horizontalHeaderItem(col)->text();
    }
    out << headers.join(",") << "\n";

    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QStringList rowData;
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col) {
            QTableWidgetItem* item = ui->tableWidget->item(row, col);
            rowData << (item ? item->text() : "");
        }
        out << rowData.join(",") << "\n";
    }

    file.close();
}
