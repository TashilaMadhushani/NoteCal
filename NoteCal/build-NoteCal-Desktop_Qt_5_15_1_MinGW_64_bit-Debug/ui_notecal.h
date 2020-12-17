/********************************************************************************
** Form generated from reading UI file 'notecal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTECAL_H
#define UI_NOTECAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoteCal
{
public:
    QAction *actionnew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionRedo;
    QAction *actionUndo;
    QAction *actionAbout;
    QAction *actionCalculator;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuCalculator;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *NoteCal)
    {
        if (NoteCal->objectName().isEmpty())
            NoteCal->setObjectName(QString::fromUtf8("NoteCal"));
        NoteCal->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/notepad.png"), QSize(), QIcon::Normal, QIcon::Off);
        NoteCal->setWindowIcon(icon);
        NoteCal->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127)"));
        actionnew = new QAction(NoteCal);
        actionnew->setObjectName(QString::fromUtf8("actionnew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionnew->setIcon(icon1);
        actionOpen = new QAction(NoteCal);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(NoteCal);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_As = new QAction(NoteCal);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon4);
        actionCut = new QAction(NoteCal);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionCopy = new QAction(NoteCal);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionPaste = new QAction(NoteCal);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon7);
        actionRedo = new QAction(NoteCal);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        actionUndo = new QAction(NoteCal);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionAbout = new QAction(NoteCal);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon10);
        actionCalculator = new QAction(NoteCal);
        actionCalculator->setObjectName(QString::fromUtf8("actionCalculator"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCalculator->setIcon(icon11);
        centralwidget = new QWidget(NoteCal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 661, 491));
        textEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 254, 219)"));
        NoteCal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NoteCal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuCalculator = new QMenu(menubar);
        menuCalculator->setObjectName(QString::fromUtf8("menuCalculator"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        NoteCal->setMenuBar(menubar);
        statusbar = new QStatusBar(NoteCal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NoteCal->setStatusBar(statusbar);
        toolBar = new QToolBar(NoteCal);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy);
        toolBar->setStyleSheet(QString::fromUtf8("background-color:rgb(63, 63, 63)"));
        NoteCal->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(NoteCal);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        toolBar_2->setStyleSheet(QString::fromUtf8("background-color:rgb(63, 63, 63)"));
        NoteCal->addToolBar(Qt::LeftToolBarArea, toolBar_2);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuCalculator->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionnew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionUndo);
        menuCalculator->addAction(actionCalculator);
        menuAbout->addAction(actionAbout);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionUndo);
        toolBar->addSeparator();
        toolBar->addAction(actionCalculator);
        toolBar->addSeparator();
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionAbout);
        toolBar_2->addAction(actionnew);
        toolBar_2->addAction(actionOpen);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionSave_As);
        toolBar_2->addAction(actionSave);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionCut);
        toolBar_2->addAction(actionCopy);
        toolBar_2->addAction(actionPaste);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionRedo);
        toolBar_2->addAction(actionUndo);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionCalculator);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionAbout);

        retranslateUi(NoteCal);

        QMetaObject::connectSlotsByName(NoteCal);
    } // setupUi

    void retranslateUi(QMainWindow *NoteCal)
    {
        NoteCal->setWindowTitle(QCoreApplication::translate("NoteCal", "NoteCal ", nullptr));
        actionnew->setText(QCoreApplication::translate("NoteCal", "New", nullptr));
#if QT_CONFIG(tooltip)
        actionnew->setToolTip(QCoreApplication::translate("NoteCal", "newpage", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOpen->setText(QCoreApplication::translate("NoteCal", "Open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("NoteCal", "open", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSave->setText(QCoreApplication::translate("NoteCal", "Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("NoteCal", "Save", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSave_As->setText(QCoreApplication::translate("NoteCal", "Save As", nullptr));
#if QT_CONFIG(tooltip)
        actionSave_As->setToolTip(QCoreApplication::translate("NoteCal", "Save As", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCut->setText(QCoreApplication::translate("NoteCal", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        actionCut->setToolTip(QCoreApplication::translate("NoteCal", "Cut", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopy->setText(QCoreApplication::translate("NoteCal", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy->setToolTip(QCoreApplication::translate("NoteCal", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPaste->setText(QCoreApplication::translate("NoteCal", "Paste", nullptr));
#if QT_CONFIG(tooltip)
        actionPaste->setToolTip(QCoreApplication::translate("NoteCal", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRedo->setText(QCoreApplication::translate("NoteCal", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        actionRedo->setToolTip(QCoreApplication::translate("NoteCal", "Redo", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUndo->setText(QCoreApplication::translate("NoteCal", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        actionUndo->setToolTip(QCoreApplication::translate("NoteCal", "Undo", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout->setText(QCoreApplication::translate("NoteCal", "About", nullptr));
        actionCalculator->setText(QCoreApplication::translate("NoteCal", "Calculator", nullptr));
#if QT_CONFIG(tooltip)
        actionCalculator->setToolTip(QCoreApplication::translate("NoteCal", "Calculator", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("NoteCal", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("NoteCal", "Edit", nullptr));
        menuCalculator->setTitle(QCoreApplication::translate("NoteCal", "Calculator", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("NoteCal", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("NoteCal", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("NoteCal", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoteCal: public Ui_NoteCal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTECAL_H
