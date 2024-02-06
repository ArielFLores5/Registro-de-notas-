#ifndef ACERCADEFORM_H
#define ACERCADEFORM_H

#include <QDialog>
#include <QDesktopServices>
#include <QUrl>

namespace Ui {
class AcercaDeForm;
}

class AcercaDeForm : public QDialog
{
    Q_OBJECT

public:
    explicit AcercaDeForm(QWidget *parent = nullptr);
    ~AcercaDeForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AcercaDeForm *ui;
};

#endif // ACERCADEFORM_H
