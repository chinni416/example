#ifndef THIRD_DIALOG_H
#define THIRD_DIALOG_H

#include <QDialog>

namespace Ui {
class third_Dialog;
}

class third_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit third_Dialog(QWidget *parent = 0);
    ~third_Dialog();

private:
    Ui::third_Dialog *ui;
};

#endif // THIRD_DIALOG_H
