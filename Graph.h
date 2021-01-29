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
#include "Vertex.h"
class Graph {
private:
    vector<Vertex> *g;
public:
    Graph();
    void insertVertex(const Vertex& edge);
    bool eraseEdge(const Vertex& edge);
    bool isAdjacent(char u, char v);
    string toString();

    vector<Vertex> *getG() const;

    void setG(vector<Vertex> *g);
};


#endif //EXAMEN02DATOS_GRAPH_H
