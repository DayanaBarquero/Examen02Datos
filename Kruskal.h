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
    vector<string> v;
    vector<Graph> edges;
public:
    static string find(string vertex);
    static void Union(string root1,string root2);
    static void makeSet(string vertex);
    Kruskal();
    virtual ~Kruskal();
    static void kruskaMST(Graph& g);

};



#endif //EXAMEN02DATOS_KRUSKAL_H
