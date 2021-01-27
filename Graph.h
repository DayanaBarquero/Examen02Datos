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
    vector<char>vertices;
    vector<Vertex> *g;
    Vertex *v;
public:
    const vector<char> &getVertices() const;

    void setVertices(const vector<char> &vertices);

    Vertex *getV() const;

    void setV(Vertex *v);

    Graph();
    char getVertexFirst();
    char getVetexSecond();
    int getWeight();
    void insertVertex(Vertex edge);
    bool eraseEdge(Vertex edge);
    bool isAdjacent(char u, char v);
    string toString();

    vector<Vertex> *getG() const;

    void setG(vector<Vertex> *g);
};


#endif //EXAMEN02DATOS_GRAPH_H
