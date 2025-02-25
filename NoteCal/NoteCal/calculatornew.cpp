#include "calculatornew.h"
#include "ui_calculatornew.h"

double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

CalculatorNew::CalculatorNew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalculatorNew)
{
    ui->setupUi(this);
   ui->Display->setText(QString::number(calcVal));
   QPushButton *numButtons[10];
   for(int i=0;i<10;++i){
       QString butName = "Button"+ QString::number(i);
       numButtons[i]= CalculatorNew::findChild<QPushButton *>(butName);
       connect(numButtons[i],SIGNAL(released()),this,
               SLOT(NumPressed()));
   }
   connect(ui->Add,SIGNAL(released()),this,
           SLOT(MathButtonPressed()));
   connect(ui->Subtract,SIGNAL(released()),this,
           SLOT(MathButtonPressed()));
   connect(ui->Multiply,SIGNAL(released()),this,
           SLOT(MathButtonPressed()));
   connect(ui->Divide,SIGNAL(released()),this,
           SLOT(MathButtonPressed()));
   connect(ui->Equals,SIGNAL(released()),this,
           SLOT(EqualButtonPressed()));
   connect(ui->ChangeSign,SIGNAL(released()),this,
           SLOT(ChangeNumberSign()));

}

CalculatorNew::~CalculatorNew()
{
    delete ui;
}
//calcultor function for press number and display it
void CalculatorNew:: NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    //check value is zero
    if((displayVal.toDouble()==0) || (displayVal.toDouble()==0.0)){
        ui->Display->setText(butVal);

    }else {
    QString newVal = displayVal + butVal;
    double dblNewVal = newVal.toDouble();
    ui->Display->setText(QString:: number(dblNewVal,'g',16));
}
}

//math button pressed
void CalculatorNew :: MathButtonPressed(){

     divTrigger = false;
     multTrigger = false;
     addTrigger = false;
     subTrigger = false;
     QString displayVal = ui->Display->text();
     calcVal = displayVal.toDouble();
     QPushButton *button = (QPushButton *)sender();
     QString butVal = button->text();
     if(QString ::compare(butVal,"/", Qt::CaseInsensitive) == 0){
         divTrigger= true;
     }
     else if(QString ::compare(butVal,"*", Qt::CaseInsensitive) == 0){
         multTrigger= true;
     }
     else if(QString ::compare(butVal,"+", Qt::CaseInsensitive) == 0){
         addTrigger= true;
     }
     else {
         subTrigger= true;
     }
     ui->Display->setText("");

}
//press equal button and what to do with calculations
void CalculatorNew :: EqualButtonPressed(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if(addTrigger || subTrigger || multTrigger || divTrigger){
        if(addTrigger){
            solution = calcVal+dblDisplayVal;
        }
        else if(subTrigger){
            solution = calcVal-dblDisplayVal;
        }
        else if(multTrigger){
            solution = calcVal*dblDisplayVal;
        }
        else {
            solution = calcVal /dblDisplayVal;
        }
    }
    ui->Display->setText(QString :: number(solution));
}

void CalculatorNew :: ChangeNumberSign(){
    QString displayVal = ui->Display->text();
    //regular expression
    QRegExp reg("[-]?[0-9]*");
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }
}

void CalculatorNew::on_plus_btn_clicked()
{

}

void CalculatorNew::on_Clear_clicked()
{
    //clear the display
    ui->Display->setText("0");
}
