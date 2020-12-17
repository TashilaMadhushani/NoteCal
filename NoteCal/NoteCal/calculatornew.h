#ifndef CALCULATORNEW_H
#define CALCULATORNEW_H

#include <QDialog>

namespace Ui {
class CalculatorNew;
}

class CalculatorNew : public QDialog
{
    Q_OBJECT
    double num1 = 0,num2=0,result=0;
    double getLineEditNum();

public:
    explicit CalculatorNew(QWidget *parent = nullptr);
    ~CalculatorNew();

private slots:
    void on_plus_btn_clicked();
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void ChangeNumberSign();

    void on_Clear_clicked();

private:
    Ui::CalculatorNew *ui;
};

#endif // CALCULATORNEW_H
