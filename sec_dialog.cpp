#include "sec_dialog.h"
#include "ui_sec_dialog.h"
#include<third_dialog.h>

third_Dialog *thrdig;




sec_Dialog::sec_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sec_Dialog)
{
    ui->setupUi(this);
}

sec_Dialog::~sec_Dialog()
{
    delete ui;
}

void sec_Dialog::on_seddigpb_clicked()
{
 thrdig =new third_Dialog();
 thrdig->show();
}
