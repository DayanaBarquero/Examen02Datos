//
// Created by dayan on 26/1/2021.
//
#ifndef EXAMEN02DATOS_KRUSKAL_H
#define EXAMEN02DATOS_KRUSKAL_H
#include <iostream>
#include "Graph.h"
#include <vector>
#include <algorithm>
#include "DisjoinSets.h"
using namespace std;
typedef pair<int,int>iPair;
class Kruskal {
private:
    int V,E;
    vector<pair<int,iPair>> edges;
public:
    Kruskal(int V,int E);
    void addEdge(int u,int v,int w);
    int kruskalMST();

};



#endif //EXAMEN02DATOS_KRUSKAL_H
