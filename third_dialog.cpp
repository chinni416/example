#include "third_dialog.h"
#include "ui_third_dialog.h"

third_Dialog::third_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::third_Dialog)
{
    ui->setupUi(this);
}

third_Dialog::~third_Dialog()
{
    delete ui;
}
