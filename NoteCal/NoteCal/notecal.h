#ifndef NOTECAL_H
#define NOTECAL_H

#include <QMainWindow>
#include <calculatornew.h>

QT_BEGIN_NAMESPACE
namespace Ui { class NoteCal; }
QT_END_NAMESPACE

class NoteCal : public QMainWindow
{
    Q_OBJECT

public:
    NoteCal(QWidget *parent = nullptr);
    ~NoteCal();

private slots:
    void on_actionnew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionRedo_triggered();

    void on_actionUndo_triggered();

    void on_actionAbout_triggered();

    void on_actionCalculator_triggered();

private:
    Ui::NoteCal *ui;
    QString file_path_;
    //calculator Create A pointer
    CalculatorNew *calculator;

};
#endif // NOTECAL_H
