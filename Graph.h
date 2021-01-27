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
    vector<string>vertices;
    vector<Vertex> *g;
    Vertex *v;
public:
    const vector<string> &getVertices() const;

    void setVertices(const vector<string> &vertices);

    Vertex *getV() const;

    void setV(Vertex *v);

    Graph();
    string getVertexFirst();
    string getVetexSecond();
    int getWeight();
    void insertVertex(Vertex edge);
    bool eraseEdge(Vertex edge);
    bool isAdjacent(string u, string v);
    string toString();

    vector<Vertex> *getG() const;

    void setG(vector<Vertex> *g);
};


#endif //EXAMEN02DATOS_GRAPH_H
