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
    vector<char> v;
    vector<Graph> edges;
public:
    static char find(char vertex);
    static void Union(char root1,char root2);
    static void makeSet(char vertex);
    Kruskal();
    virtual ~Kruskal();
    static void kruskaMST(Graph& g);

};



#endif //EXAMEN02DATOS_KRUSKAL_H
