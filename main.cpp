//
// Created by dayan on 26/1/2021.
//
#include"Graph.h"
#include "Kruskal.h"
int main(){
    Vertex d;
    d.setFirstVertex("A");
    d.setSecondVertex("B");
    d.setWeight(8);
    cout<<d.toString();
   Graph graph;
   graph.insertVertex(d);
   cout<<graph.toString();
   Kruskal f;
   f.kruskaMST(graph);



    return 0;
}