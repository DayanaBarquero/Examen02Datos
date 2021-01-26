//
// Created by ariad on 26/1/2021.
//

#ifndef EXAMEN02DATOS_DIJKSTRA_H
#define EXAMEN02DATOS_DIJKSTRA_H
#include <algorithm>
#include<iostream>
#include<set>
#include<list>
#include<vector>
#include "DisjointSets.h"
#define INF 0x3f3f3f3f

class Dijkstra {
   int V;
   list<pair<int, int>> *adj;
public:
    Dijkstra(int V);
    void addEdge(int u, int v, int w);
    void dijkstraAlgorithm(int s);
    void print(vector<int>);

};


#endif //EXAMEN02DATOS_DIJKSTRA_H
