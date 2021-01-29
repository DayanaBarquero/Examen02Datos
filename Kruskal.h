//
// Created by dayan on 26/1/2021.
//

#ifndef EXAMEN02DATOS_KRUSKAL_H
#define EXAMEN02DATOS_KRUSKAL_H
#include <iostream>
#include "Graph.h"
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Kruskal {
private:
    Graph *graph;
public:
    static string find(const string& vertex);
    static void Union(const string& root1,const string& root2);
    static void makeSet(const string& vertex);

    Kruskal(Graph *graph);

    Kruskal();

    virtual ~Kruskal();
    void kruskaMST();

};



#endif //EXAMEN02DATOS_KRUSKAL_H
