#include "cuadronotas.h"
#include "ui_cuadronotas.h"
#include "ingresodatosform.h"

// cuadronotas.cpp

CuadroNotas::CuadroNotas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CuadroNotas),
    acercaDeForm(nullptr)  // Inicializa acercaDeForm como nullptr
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(6);
    QStringList headers = {"Nombres", "Nota 1 Parcial", "Nota 2 Parcial", "Nota Final", "Estado", "Nota Remedial Minima"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    connect(ui->actionArchivos, &QAction::triggered, this, &CuadroNotas::guardarEnCSV);
    connect(ui->actionCargar_Datos, &QAction::triggered, this, &CuadroNotas::cargarDesdeCSV);
    connect(ui->actionLinks, &QAction::triggered, this, &CuadroNotas::mostrarAcercaDeForm);
    ui->menuDatos->addAction(ui->actionCargar_Datos);
}


CuadroNotas::~CuadroNotas()
{
    delete ui;
    delete acercaDeForm;
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
void CuadroNotas::on_actionArchivos_triggered()
{
    //Porsia no vale
}
void CuadroNotas::cargarDesdeCSV()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("Abrir archivo CSV"), QString(), tr("Archivos CSV (*.csv)"));

    if (filePath.isEmpty()) {
        return;
    }

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, tr("Error"), tr("No se pudo abrir el archivo para lectura."));
        return;
    }

    QTextStream in(&file);
    QStringList headers = in.readLine().split(",");
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList rowData = line.split(",");
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        for (int col = 0; col < rowData.size(); ++col) {
            ui->tableWidget->setItem(row, col, new QTableWidgetItem(rowData[col]));
        }
    }

    file.close();
}

void CuadroNotas::on_actionCargar_Datos_triggered()
{
    //Porsia no vale
}

void CuadroNotas::mostrarAcercaDeForm()
{
    // Crea la subventana si aún no existe
    if (!acercaDeForm) {
        acercaDeForm = new AcercaDeForm(this);
    }

    // Muestra la subventana
    acercaDeForm->show();
}

void CuadroNotas::on_actionLinks_triggered()
{
    //Porsia no vale
}

