#ifndef EIGHTQUEENS_H
#define EIGHTQUEENS_H

#include <QMainWindow>
#include <vector>
#include <cmath>

using namespace std;
namespace Ui {
class EightQueens;
}

class EightQueens : public QMainWindow
{
    Q_OBJECT

public:
    explicit EightQueens(QWidget *parent = 0);
    void clearBoard();
    void show(vector<int> data);
    ~EightQueens();

private slots:
    void on_HS_Popsize_valueChanged(int value);

    void on_HS_MaxGen_valueChanged(int value);

    void on_HS_Pc_valueChanged(int value);

    void on_HS_Pm_valueChanged(int value);

    void on_Run_clicked();

private:
    Ui::EightQueens *ui;
};

#endif // EIGHTQUEENS_H
