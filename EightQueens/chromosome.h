//
//  Chromosome.h
//  EightQueens
//
//  Created by MirErfan Gheibi on 10/28/16.
//  Copyright © 2016 MirErfan Gheibi. All rights reserved.
//

#ifndef Chromosome_h
#define Chromosome_h
#include <vector>
using namespace std;

class Chromosome{
private:
    vector <int> _Data;
    int _FitVal;
    int abs(int input);
    void EvalFitness();

public:
    Chromosome();

    int get_FitVal();
    int Set(vector<int> NewData);
    int Get(vector<int> &RetData);
    void fillRandom(int i);
    bool operator> (const Chromosome &ch)const
    {
        return this->_FitVal>ch._FitVal;
    }

    bool operator>= (const Chromosome &ch)const
    {
        return this->_FitVal>=ch._FitVal;
    }

    bool operator< (const Chromosome &ch)const
    {
        return this->_FitVal<ch._FitVal;
    }

    bool operator<= (const Chromosome &ch)const
    {
        return this->_FitVal<=ch._FitVal;
    }
    bool operator== (const Chromosome &ch)const
    {
        return this->_FitVal==ch._FitVal;
    }
};
Chromosome::Chromosome(){
    _Data.assign(8, 0);
}
int Chromosome::abs(int input){
    if (input<0) { // If input is negative
        return input*-1; // Make it possitive
    }
    else
        return input;
}
void Chromosome::fillRandom(int i){
    srand((i+1)*100*(unsigned int)time(NULL));
    for (int i=0; i<8; i++) {
        _Data[i]=(rand()%8)+1;
    }
    EvalFitness();
}
void Chromosome::EvalFitness(){

    unsigned short int d_conflict=0;// Diameter Conflicts
    unsigned short int r_conflict=0;// Row Conflicts
    for (int i=0; i<7; i++) {
        for (int j=i+1; j<8; j++) {
            if (_Data[i]==_Data[j]) {
                r_conflict++;
            }
            if (abs(_Data[i]-_Data[j])==abs(i-j)) {
                d_conflict++;
            }
        }
    }
    _FitVal=d_conflict+r_conflict;
}
int Chromosome::get_FitVal(){
    if (_Data[0]==0) {
        return -1;
    }
    else
        return _FitVal;
}
int Chromosome::Set(vector<int>NewData){
    if (NewData.size()!=8) {
        return -2;
    }
    else{
        for (int i=0; i<8; i++) {
            if (NewData[i]>8 || NewData[i]<1)
                return i+1;
        }
    }
    for (int i=0; i<8; i++) {
        _Data[i]=NewData[i];
    }
    EvalFitness();
    return 0;
}
int Chromosome::Get(vector<int> &RetData){
    if (_Data[0]==0) {
        return -1;
    }
    else if (RetData.size()!=8)
        return -2;
    for (int i=0; i<8; i++) {
        RetData[i]=_Data[i];
    }
    return 0;
}


#endif /* Chromosome_h */
