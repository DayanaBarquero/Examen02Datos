//
// Created by dayan on 26/1/2021.
//
#include <iostream>
//#include"Graph.h"
#include "Kruskal.h"
int main(){
   /* Graph graph;
    graph.insertVertex(Vertex(8,"A","B" ));
    graph.insertVertex(Vertex(12,"A","C" ));
    graph.insertVertex(Vertex(9,"B","C" ));
    graph.insertVertex(Vertex(8,"B","D" ));
    graph.insertVertex(Vertex(3,"C","E" ));

    std::cout<<graph.toString();
    */
   int V = 9,E= 11;

   Kruskal d(V,E);

   d.addEdge(0,1,4);
   d.addEdge(0,7,8);
   d.addEdge(1,2,8);
   d.addEdge(1,7,11);
   d.addEdge(2,3,4);
   d.addEdge(2,5,8);
   d.addEdge(3,4,8);
   d.addEdge(4,5,11);
   d.addEdge(5,6,4);
   d.addEdge(6,7,8);
   d.addEdge(7,8,7);

   //cout<<"edge\n"<<endl;
   int mst = d.kruskaMST();
   cout<<"peso"<<mst;
    return 0;
}