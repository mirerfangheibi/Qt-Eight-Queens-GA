//
//  GeneticAlgorithm.h
//  EightQueens
//
//  Created by MirErfan Gheibi on 10/28/16.
//  Copyright © 2016 MirErfan Gheibi. All rights reserved.
//

#ifndef GeneticAlgorithm_h
#define GeneticAlgorithm_h
#include <cmath>
#include "chromosome.h"
using namespace std;

class GeneticAlgorithm{
private:
    vector<Chromosome> _Pop;
    int _PopSize;
    int _MaxGen;
    int _Pc;
    int _Pm;
    bool PopSize_init;
    bool MaxGen_init;
    bool Pc_init;
    bool Pm_init;
    bool Pop_init;
    int Initialize();
    int CrossOver();
    int Mutation();
    int Selection();
public:
    GeneticAlgorithm();
    int SetGAParam (int PopSize, int MaxGen, short int Pc, short int Pm);
    int Run (Chromosome &Result);
};
GeneticAlgorithm::GeneticAlgorithm(){
    PopSize_init=false;
    MaxGen_init=false;
    Pc_init=false;
    Pm_init=false;
    Pop_init=false;
}
int GeneticAlgorithm::SetGAParam (int PopSize, int MaxGen, short int Pc, short int Pm){
    if (PopSize>200 || PopSize<1)
        return 1;
    else if (MaxGen>10000 || MaxGen<1)
        return 2;
    else if (Pc>100 || Pc<0)
        return 3;
    else if (Pm>100 || Pm<0)
        return 4;
    _PopSize=PopSize;
    _MaxGen=MaxGen;
    _Pc=Pc;
    _Pm=Pm;
    PopSize_init=true;
    MaxGen_init=true;
    Pc_init=true;
    Pm_init=true;
    _Pop.resize(_PopSize);
    return 0;
}
int GeneticAlgorithm::Initialize(){
    if (!PopSize_init)
        return -1;
    for (int i=0; i<_PopSize; i++) {
        _Pop[i].fillRandom(i);
    }
    return 0;
}
int GeneticAlgorithm::CrossOver(){
    if (!PopSize_init)
        return 1;
    else if (!Pc_init)
        return 2;
    int operations,randomch,randomg;
    vector<int> data1(8);
    vector<int> data2(8);
    vector<int> data3(8);
    vector<int> data4(8);
    Chromosome ch1,ch2;
    srand((unsigned int)time(NULL));
    operations=round(_Pc*_Pop.size()/100);
    for (int i=0; i<operations; i++) {
        randomch=(rand()%(_PopSize));
        _Pop[randomch].Get(data1);
        randomch=(rand()%(_PopSize));
        _Pop[randomch].Get(data2);
        randomg=rand()%8;
        for (int j=0; j<randomg; j++) {
            data3[j]=data1[j];
            data4[j]=data2[j];
        }
        for (int j=randomg; j<8; j++) {
            data3[j]=data2[j];
            data4[j]=data1[j];
        }
        ch1.Set(data1);
        ch2.Set(data2);
        _Pop.push_back(ch1);
        _Pop.push_back(ch2);
    }



    return 0;
}
int GeneticAlgorithm::Mutation(){
    if (!PopSize_init)
        return 1;
    else if (!Pm_init)
        return 2;
    int operations,randomch,randomg;
    vector<int> data(8);
    Chromosome ch;
    srand((unsigned int)time(NULL));
    operations=round(_Pm*_Pop.size()/100);
    for (int i=0; i<operations; i++) {
        randomch=(rand()%(_PopSize));
        _Pop[randomch].Get(data);
        randomg=rand()%8;
        data[randomg]=(rand()%8)+1;
        ch.Set(data);
        _Pop.push_back(ch);
    }
    return 0;
}
int GeneticAlgorithm::Selection(){
    if (!PopSize_init)
        return 1;
    sort(_Pop.begin(), _Pop.end());
    _Pop.resize(_PopSize);
    return 0;
}
int GeneticAlgorithm::Run(Chromosome &Result){
    int rc,rm,rs,ri;
    ri=Initialize();
    if (ri!=0)
        return 10+ri;
    for (int i=0; i<_MaxGen; i++){
        rc=CrossOver();
        if(rc!=0)
            return 20+ri;
        rm=Mutation();
        if(rm!=0)
            return 30+rm;
        rs=Selection();
        if(rs!=0)
            return 40+rs;
    }
    for(int j=0;j<8;j++){
        Result=_Pop[0];
    }
    return 0;
}
#endif /* GeneticAlgorithm_h */
