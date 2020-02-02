#include "eightqueens.h"
#include "ui_eightqueens.h"
#include "geneticalgorithm.h"
#include <QStringListModel>
EightQueens::EightQueens(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EightQueens)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("\tReady!");
}

EightQueens::~EightQueens()
{
    delete ui;
}

void EightQueens::on_HS_Popsize_valueChanged(int value)
{
    ui->L_Popsize->setText("PopSize: "+QString::number(value));
}

void EightQueens::on_HS_MaxGen_valueChanged(int value)
{
    ui->L_MaxGen->setText("MaxGen: "+QString::number(value));
}

void EightQueens::on_HS_Pc_valueChanged(int value)
{
    ui->L_Pc->setText("Pc: "+QString::number(value));
}

void EightQueens::on_HS_Pm_valueChanged(int value)
{
    ui->L_Pm->setText("Pm: "+QString::number(value));
}

void EightQueens::clearBoard(){
    QString s = QString();
    bool odd=false;
    s="";
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if (odd)
                s+="<img src=\":/images/Black.gif\">\n";
            else if(!odd)
                s+="<img src=\":/images/White.gif\">\n";
            odd=!odd;
        }
        odd=!odd;
        s+="<br>";
    }
    ui->ChessBoard->setText(s);
}

void EightQueens::show(vector<int> data){

    QString s = QString();
    //vector<int> data(8);
    //ch.Get(data);
    bool odd=false;
    bool conflict[8]={false,false,false,false,false,false,false,false};
    s="";
    for (int i=0; i<7; i++) {
        for (int j=i+1; j<8; j++) {
            if (data[i]==data[j]) {
                conflict[i]=true;
                conflict[j]=true;
            }
            if (abs(data[i]-data[j])==abs(i-j)) {
                conflict[i]=true;
                conflict[j]=true;
            }
        }
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if((odd&&(8-data[j]==i))&&conflict[j]){
                s+="<img src=\":/images/Black_Q_C.gif\">\n";
                odd=!odd;
                continue;}
            else if(odd&&(8-data[j]==i))
                s+="<img src=\":/images/Black_Q.gif\">\n";
            else if (odd)
                s+="<img src=\":/images/Black.gif\">\n";
            else if((!odd&&(8-data[j]==i))&&conflict[j]){
                s+="<img src=\":/images/White_Q_C.gif\">\n";
                odd=!odd;
                continue;}
            else if(!odd&&(8-data[j]==i))
                s+="<img src=\":/images/White_Q.gif\">\n";
            else if(!odd)
                s+="<img src=\":/images/White.gif\">\n";
            odd=!odd;
        }
        odd=!odd;
        s+="<br>";
    }
    ui->ChessBoard->setText(s);

}

void EightQueens::on_Run_clicked()
{

    int Best_fv=28,execution_code;
    vector<int>BestData(8);
    Chromosome Res;
    GeneticAlgorithm GA;
    QPalette palette = ui->BestAnswer->palette();
    ui->statusBar->showMessage("\tBusy!");
    clearBoard();
    GA.SetGAParam(ui->HS_Popsize->value(),ui->HS_MaxGen->value(),ui->HS_Pc->value(),ui->HS_Pm->value());
    execution_code=GA.Run(Res);
    if(execution_code==0){
        Res.Get(BestData);
        Best_fv=Res.get_FitVal();
        ui->BestAnswer->setText("Best Answer FitVal: "+QString::number(Best_fv));
        if(Best_fv==0)
            palette.setColor(ui->BestAnswer->foregroundRole(), Qt::green);
        else
         palette.setColor(ui->BestAnswer->foregroundRole(), Qt::red);
         ui->BestAnswer->setPalette(palette);
        show(BestData);
        ui->History->addItem("("+QString::number(ui->HS_Popsize->value())+","+QString::number(ui->HS_MaxGen->value())+","+QString::number(ui->HS_Pc->value())+","+QString::number(ui->HS_Pm->value())+")->"+QString::number(Best_fv));
    }
    switch (execution_code) {
    case 0:
        ui->statusBar->showMessage("\tGenetic Algorithm Executed Successfully!");
        break;
    case 9:
        ui->statusBar->showMessage("\tError Occured In Initialization (Uninitialized Popsize)!");
        break;
    case 21:
        ui->statusBar->showMessage("\tError Occured In Crossover (Uninitialized Population)!");
        break;
    case 22:
        ui->statusBar->showMessage("\tError Occured In Crossover (Uninitialized Pc)!");
        break;
    case 31:
        ui->statusBar->showMessage("\tError Occured In Mutation (Uninitialized Population)!");
        break;
    case 32:
        ui->statusBar->showMessage("\tError Occured In Mutation (Uninitialized Pm)!");
        break;
    case 41:
        ui->statusBar->showMessage("\tError Occured In Selection (Uninitialized Population)!");
        break;
    default:
        break;
    }


}
