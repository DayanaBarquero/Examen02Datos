//
// Created by ariad on 26/1/2021.
//

#ifndef EXAMEN02DATOS_GRAPH_H
#define EXAMEN02DATOS_GRAPH_H
#include"Vertex.h"
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;

class Graph {
private:
    vector<Vertex> *g;
public:
    Graph();
    void insertVertex(Vertex edge);
    bool eraseEdge(Vertex edge);
    bool isAdjacent(string u, string v);
    string toString();
};


#endif //EXAMEN02DATOS_GRAPH_H
