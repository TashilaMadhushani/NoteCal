#include "notecal.h"
#include "ui_notecal.h"
//file notepad
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
//import calculator
#include <calculatornew.h>

#include <QMessageBox>
NoteCal::NoteCal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NoteCal)
{
    ui->setupUi(this);
    //remove space between textarea and window
    this->setCentralWidget(ui->textEdit);
}

NoteCal::~NoteCal()
{
    delete ui;
}


void NoteCal::on_actionnew_triggered()
{
    //set document to blank
        file_path_="";
        ui->textEdit->setText("");
}

void NoteCal::on_actionOpen_triggered()
{
    //notepad open text documents
        QString file_name = QFileDialog::getOpenFileName(this,"Open the file");
        QFile file(file_name);
        file_path_= file_name;
        if(!file.open(QFile::ReadOnly | QFile::Text)){
            QMessageBox::warning(this,"..","file not open");
            return;
        }
        QTextStream in (&file);
        QString text = in.readAll();
        //passing file to the UI
        ui->textEdit->setText(text);
        file.close();

}

void NoteCal::on_actionSave_triggered()
{
    //new my new code Updated to filepath is empty or not
        //checking current file path is not true if it's true update current file else promp a dialof box to save it as a new document
        if(file_path_.isEmpty()){
            return on_actionSave_As_triggered();
        }
        else{
            QFile file(file_path_);
            if(!file.open(QFile::WriteOnly | QFile::Text)){
                QMessageBox::warning(this,"..","file not open");
                return;
            }
            QTextStream out (&file);
            //after the save blank text
            QString text = ui->textEdit->toPlainText();
            //output

            out<< text;
            file.flush();
            file.close();
        }
}

void NoteCal::on_actionSave_As_triggered()
{
    //notepad save text documents
       // QString file_name = QFileDialog::getSaveFileName(this,"saving file");
     QString file_name = QFileDialog::getSaveFileName(this, tr("Saving file"),"untitled.txt", tr("Text Files (*.txt);;All Files (*.*)"));
        QFile file(file_name);
        file_path_ = file_name;
        if(!file.open(QFile::WriteOnly | QFile::Text)){
            QMessageBox::warning(this,"..","file not open");
            return;
        }
        QTextStream out (&file);
        //after the save blank text
        QString text = ui->textEdit->toPlainText();
        //output

        out<< text;
        file.flush();
        file.close();
}

void NoteCal::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void NoteCal::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void NoteCal::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void NoteCal::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void NoteCal::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void NoteCal::on_actionAbout_triggered()
{
    QString about_text;
    about_text ="Auther : Tashila Madhushani\n";
    about_text += "Date: 2020/12/08\n";
    about_text += "Description: I Developed a combination of notepad and calculator software\n"
                  "And I think this is helpful for Sri Lankan small grocery shops to save their important Customers and Deliverers Informations \n"
                  "Thank You\n"
                  "Cross Platoform Development with C++\n";
    about_text += "(c)NotePad + Calculator: (R)\n";

    QMessageBox::about(this,"About NotePad",about_text);
}

void NoteCal::on_actionCalculator_triggered()
{
    calculator = new CalculatorNew(this);
    calculator->show();
}
