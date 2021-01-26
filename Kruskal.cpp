//
// Created by dayan on 26/1/2021.
//

#include "Kruskal.h"

Kruskal::Kruskal(int V, int E) {
    this->V= V;
    this->E=E;
}

void Kruskal::addEdge(int u, int v, int w) {
    edges.push_back({w,{u,v}});
}

int Kruskal::kruskaMST() {
    int msd_wt =0;
    std::sort(edges.begin(),edges.end());
    DisjointSets ds(V);

    return 0;
}


