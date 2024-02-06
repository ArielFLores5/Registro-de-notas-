#include "acercadeform.h"
#include "ui_acercadeform.h"

AcercaDeForm::AcercaDeForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AcercaDeForm)
{
    ui->setupUi(this);
}

AcercaDeForm::~AcercaDeForm()
{
    delete ui;
}

void AcercaDeForm::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/ArielFLores5/Registro-de-notas-"));
}

