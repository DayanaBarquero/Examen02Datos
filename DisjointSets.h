//
// Created by dayan on 26/1/2021.
//

#ifndef EXAMEN02DATOS_DISJOINTSETS_H
#define EXAMEN02DATOS_DISJOINTSETS_H
#include <iostream>
#include <sstream>
using namespace std;

class DisjointSets {
private:
    int *parent,*rnk;
    int n;
public:
    DisjointSets(int n);
    int find(int u);
    void merge(int x,int y);
};


#endif //EXAMEN02DATOS_DISJOINTSETS_H
