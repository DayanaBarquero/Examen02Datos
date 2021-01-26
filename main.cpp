//
// Created by dayan on 26/1/2021.
//
#include <iostream>
#include"Graph.h"
int main(){
    Graph graph;
    graph.insertVertex(Vertex(8,"A","B" ));
    graph.insertVertex(Vertex(12,"A","C" ));
    graph.insertVertex(Vertex(9,"B","C" ));
    graph.insertVertex(Vertex(8,"B","D" ));
    graph.insertVertex(Vertex(3,"C","E" ));

    std::cout<<graph.toString();
    return 0;
}