/********************************************************************************
** Form generated from reading UI file 'eightqueens.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EIGHTQUEENS_H
#define UI_EIGHTQUEENS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EightQueens
{
public:
    QWidget *centralWidget;
    QLabel *ChessBoard;
    QSlider *HS_Popsize;
    QLabel *L_Popsize;
    QSlider *HS_MaxGen;
    QSlider *HS_Pc;
    QSlider *HS_Pm;
    QLabel *L_MaxGen;
    QLabel *L_Pc;
    QLabel *L_Pm;
    QPushButton *Run;
    QLabel *BestAnswer;
    QLabel *GAParams;
    QLabel *down;
    QLabel *left;
    QLabel *top;
    QLabel *right;
    QListWidget *History;
    QLabel *label;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EightQueens)
    {
        if (EightQueens->objectName().isEmpty())
            EightQueens->setObjectName(QStringLiteral("EightQueens"));
        EightQueens->setWindowModality(Qt::ApplicationModal);
        EightQueens->resize(900, 680);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EightQueens->sizePolicy().hasHeightForWidth());
        EightQueens->setSizePolicy(sizePolicy);
        EightQueens->setMaximumSize(QSize(900, 680));
        EightQueens->setWindowOpacity(1);
        EightQueens->setAutoFillBackground(false);
        centralWidget = new QWidget(EightQueens);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ChessBoard = new QLabel(centralWidget);
        ChessBoard->setObjectName(QStringLiteral("ChessBoard"));
        ChessBoard->setGeometry(QRect(30, 20, 625, 625));
        ChessBoard->setMinimumSize(QSize(625, 625));
        HS_Popsize = new QSlider(centralWidget);
        HS_Popsize->setObjectName(QStringLiteral("HS_Popsize"));
        HS_Popsize->setGeometry(QRect(700, 70, 160, 22));
        HS_Popsize->setMinimum(1);
        HS_Popsize->setMaximum(200);
        HS_Popsize->setOrientation(Qt::Horizontal);
        L_Popsize = new QLabel(centralWidget);
        L_Popsize->setObjectName(QStringLiteral("L_Popsize"));
        L_Popsize->setGeometry(QRect(700, 50, 160, 16));
        HS_MaxGen = new QSlider(centralWidget);
        HS_MaxGen->setObjectName(QStringLiteral("HS_MaxGen"));
        HS_MaxGen->setGeometry(QRect(700, 130, 160, 22));
        HS_MaxGen->setMinimum(1);
        HS_MaxGen->setMaximum(10000);
        HS_MaxGen->setSingleStep(100);
        HS_MaxGen->setOrientation(Qt::Horizontal);
        HS_Pc = new QSlider(centralWidget);
        HS_Pc->setObjectName(QStringLiteral("HS_Pc"));
        HS_Pc->setGeometry(QRect(700, 190, 160, 22));
        HS_Pc->setMinimum(0);
        HS_Pc->setMaximum(100);
        HS_Pc->setOrientation(Qt::Horizontal);
        HS_Pm = new QSlider(centralWidget);
        HS_Pm->setObjectName(QStringLiteral("HS_Pm"));
        HS_Pm->setGeometry(QRect(700, 250, 160, 22));
        HS_Pm->setMinimum(0);
        HS_Pm->setMaximum(100);
        HS_Pm->setOrientation(Qt::Horizontal);
        L_MaxGen = new QLabel(centralWidget);
        L_MaxGen->setObjectName(QStringLiteral("L_MaxGen"));
        L_MaxGen->setGeometry(QRect(700, 110, 160, 16));
        L_Pc = new QLabel(centralWidget);
        L_Pc->setObjectName(QStringLiteral("L_Pc"));
        L_Pc->setGeometry(QRect(700, 170, 160, 16));
        L_Pm = new QLabel(centralWidget);
        L_Pm->setObjectName(QStringLiteral("L_Pm"));
        L_Pm->setGeometry(QRect(700, 230, 160, 16));
        Run = new QPushButton(centralWidget);
        Run->setObjectName(QStringLiteral("Run"));
        Run->setGeometry(QRect(700, 300, 160, 32));
        BestAnswer = new QLabel(centralWidget);
        BestAnswer->setObjectName(QStringLiteral("BestAnswer"));
        BestAnswer->setEnabled(true);
        BestAnswer->setGeometry(QRect(700, 360, 160, 16));
        GAParams = new QLabel(centralWidget);
        GAParams->setObjectName(QStringLiteral("GAParams"));
        GAParams->setGeometry(QRect(730, 20, 121, 20));
        down = new QLabel(centralWidget);
        down->setObjectName(QStringLiteral("down"));
        down->setGeometry(QRect(60, 640, 591, 20));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        down->setFont(font);
        left = new QLabel(centralWidget);
        left->setObjectName(QStringLiteral("left"));
        left->setGeometry(QRect(10, 20, 101, 641));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        left->setFont(font1);
        top = new QLabel(centralWidget);
        top->setObjectName(QStringLiteral("top"));
        top->setGeometry(QRect(60, 0, 591, 20));
        top->setFont(font);
        right = new QLabel(centralWidget);
        right->setObjectName(QStringLiteral("right"));
        right->setGeometry(QRect(670, 20, 16, 641));
        right->setFont(font1);
        History = new QListWidget(centralWidget);
        History->setObjectName(QStringLiteral("History"));
        History->setGeometry(QRect(700, 421, 181, 221));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(700, 400, 59, 16));
        EightQueens->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(EightQueens);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        EightQueens->setStatusBar(statusBar);

        retranslateUi(EightQueens);

        QMetaObject::connectSlotsByName(EightQueens);
    } // setupUi

    void retranslateUi(QMainWindow *EightQueens)
    {
        EightQueens->setWindowTitle(QApplication::translate("EightQueens", "EightQueens", 0));
        ChessBoard->setText(QApplication::translate("EightQueens", "<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<br><img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<br><img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<br><img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/i"
                        "mages/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<br><img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<br><img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<br><img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gi"
                        "f\">\n"
"<img src=\":/images/Black.gif\">\n"
"<br><img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">\n"
"<img src=\":/images/Black.gif\">\n"
"<img src=\":/images/White.gif\">", 0));
        L_Popsize->setText(QApplication::translate("EightQueens", "PopSize: 1", 0));
        L_MaxGen->setText(QApplication::translate("EightQueens", "MaxGen: 1", 0));
        L_Pc->setText(QApplication::translate("EightQueens", "Pc: 0", 0));
        L_Pm->setText(QApplication::translate("EightQueens", "Pm: 0", 0));
        Run->setText(QApplication::translate("EightQueens", "Run", 0));
        BestAnswer->setText(QString());
        GAParams->setText(QApplication::translate("EightQueens", "<html><head/><body><p><span style=\" font-weight:600;\">GA Parameters:</span></p></body></html>", 0));
        down->setText(QApplication::translate("EightQueens", "a                 b                 c                 d                 e                 f                  g                  h", 0));
        left->setText(QApplication::translate("EightQueens", "<html><head/><body><p align=\"justify\">8</p><p align=\"justify\"><br/></p><p align=\"justify\">7</p><p align=\"justify\"><br/></p><p align=\"justify\">6</p><p align=\"justify\"><br/></p><p align=\"justify\">5</p><p align=\"justify\"><br/></p><p align=\"justify\">4</p><p align=\"justify\"><br/></p><p align=\"justify\">3</p><p align=\"justify\"><br/></p><p align=\"justify\">2</p><p align=\"justify\"><br/></p><p align=\"justify\">1</p></body></html>", 0));
        top->setText(QApplication::translate("EightQueens", "a                 b                 c                 d                 e                 f                  g                  h", 0));
        right->setText(QApplication::translate("EightQueens", "<html><head/><body><p align=\"justify\">8</p><p align=\"justify\"><br/></p><p align=\"justify\">7</p><p align=\"justify\"><br/></p><p align=\"justify\">6</p><p align=\"justify\"><br/></p><p align=\"justify\">5</p><p align=\"justify\"><br/></p><p align=\"justify\">4</p><p align=\"justify\"><br/></p><p align=\"justify\">3</p><p align=\"justify\"><br/></p><p align=\"justify\">2</p><p align=\"justify\"><br/></p><p align=\"justify\">1</p></body></html>", 0));
        label->setText(QApplication::translate("EightQueens", "<html><head/><body><p><span style=\" font-weight:600;\">History:</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class EightQueens: public Ui_EightQueens {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EIGHTQUEENS_H
