//
// Created by ariad on 26/1/2021.
//

#ifndef EXAMEN02DATOS_GRAPH_H
#define EXAMEN02DATOS_GRAPH_H
#include"Vertex.h"
#include<vector>
#include<iostream>
#include<sstream>
#include <algorithm>
#include "DisjoinSets.h"
using namespace std;

typedef pair<int,int>iPair;
class Graph {
private:
    vector<Vertex> *g;
    int V,E;
    vector<pair<int,iPair>> edges;
public:
    Graph();
    void insertVertex(const Vertex& edge);
    bool eraseEdge(const Vertex& edge);
    bool isAdjacent(char u, char v);
    string toString();
    Graph(int V,int E);
    void addEdge(int u,int v,int w);
    int kruskalMST();

    vector<Vertex> *getG() const;

    void setG(vector<Vertex> *g);
};


#endif //EXAMEN02DATOS_GRAPH_H
