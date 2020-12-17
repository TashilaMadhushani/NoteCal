/********************************************************************************
** Form generated from reading UI file 'calculatornew.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORNEW_H
#define UI_CALCULATORNEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CalculatorNew
{
public:
    QGridLayout *gridLayout;
    QPushButton *Button4;
    QPushButton *Divide;
    QPushButton *Button9;
    QPushButton *Button3;
    QPushButton *Button5;
    QPushButton *Multiply;
    QPushButton *Add;
    QPushButton *Button2;
    QPushButton *Button8;
    QPushButton *Button6;
    QPushButton *Button7;
    QPushButton *Button1;
    QPushButton *Clear;
    QPushButton *Button0;
    QPushButton *ChangeSign;
    QPushButton *Subtract;
    QLineEdit *Display;
    QPushButton *Equals;

    void setupUi(QDialog *CalculatorNew)
    {
        if (CalculatorNew->objectName().isEmpty())
            CalculatorNew->setObjectName(QString::fromUtf8("CalculatorNew"));
        CalculatorNew->resize(425, 311);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculatorNew->sizePolicy().hasHeightForWidth());
        CalculatorNew->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        CalculatorNew->setWindowIcon(icon);
        CalculatorNew->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127)"));
        gridLayout = new QGridLayout(CalculatorNew);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button4 = new QPushButton(CalculatorNew);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Divide = new QPushButton(CalculatorNew);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy1.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy1);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#FF8C00;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Button9 = new QPushButton(CalculatorNew);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Button3 = new QPushButton(CalculatorNew);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        Button5 = new QPushButton(CalculatorNew);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Multiply = new QPushButton(CalculatorNew);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy1.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy1);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#FF8C00;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        Add = new QPushButton(CalculatorNew);
        Add->setObjectName(QString::fromUtf8("Add"));
        sizePolicy1.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy1);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#FF8C00;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        Button2 = new QPushButton(CalculatorNew);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Button8 = new QPushButton(CalculatorNew);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Button6 = new QPushButton(CalculatorNew);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        Button7 = new QPushButton(CalculatorNew);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        Button1 = new QPushButton(CalculatorNew);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        Clear = new QPushButton(CalculatorNew);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy1.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy1);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        Button0 = new QPushButton(CalculatorNew);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        ChangeSign = new QPushButton(CalculatorNew);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        sizePolicy1.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy1);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 4, 2, 1, 1);

        Subtract = new QPushButton(CalculatorNew);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        sizePolicy1.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy1);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#FF8C00;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Display = new QLineEdit(CalculatorNew);
        Display->setObjectName(QString::fromUtf8("Display"));
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color:gray;\n"
"border:1px solid gray;\n"
"color:#ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Equals = new QPushButton(CalculatorNew);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        sizePolicy1.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy1);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#FF8C00;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        gridLayout->addWidget(Equals, 1, 4, 4, 1);


        retranslateUi(CalculatorNew);

        QMetaObject::connectSlotsByName(CalculatorNew);
    } // setupUi

    void retranslateUi(QDialog *CalculatorNew)
    {
        CalculatorNew->setWindowTitle(QCoreApplication::translate("CalculatorNew", "Calculator", nullptr));
        Button4->setText(QCoreApplication::translate("CalculatorNew", "4", nullptr));
        Divide->setText(QCoreApplication::translate("CalculatorNew", "/", nullptr));
        Button9->setText(QCoreApplication::translate("CalculatorNew", "9", nullptr));
        Button3->setText(QCoreApplication::translate("CalculatorNew", "3", nullptr));
        Button5->setText(QCoreApplication::translate("CalculatorNew", "5", nullptr));
        Multiply->setText(QCoreApplication::translate("CalculatorNew", "*", nullptr));
        Add->setText(QCoreApplication::translate("CalculatorNew", "+", nullptr));
        Button2->setText(QCoreApplication::translate("CalculatorNew", "2", nullptr));
        Button8->setText(QCoreApplication::translate("CalculatorNew", "8", nullptr));
        Button6->setText(QCoreApplication::translate("CalculatorNew", "6", nullptr));
        Button7->setText(QCoreApplication::translate("CalculatorNew", "7", nullptr));
        Button1->setText(QCoreApplication::translate("CalculatorNew", "1", nullptr));
        Clear->setText(QCoreApplication::translate("CalculatorNew", "AC", nullptr));
        Button0->setText(QCoreApplication::translate("CalculatorNew", "0", nullptr));
        ChangeSign->setText(QCoreApplication::translate("CalculatorNew", "+/-", nullptr));
        Subtract->setText(QCoreApplication::translate("CalculatorNew", "-", nullptr));
        Display->setText(QCoreApplication::translate("CalculatorNew", "0.0", nullptr));
        Equals->setText(QCoreApplication::translate("CalculatorNew", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorNew: public Ui_CalculatorNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORNEW_H
