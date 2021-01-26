//
// Created by dayan on 26/1/2021.
//
#include <iostream>
#include"Graph.h"
int main(){
    Graph graph;
    graph.insertVertex(Vertex("A","B" ,8));
    graph.insertVertex(Vertex("A","C",12));
    graph.insertVertex(Vertex("B","C",9 ));
    graph.insertVertex(Vertex("B","D",8 ));
    graph.insertVertex(Vertex("C","E",3 ));

    std::cout<<graph.toString();
    return 0;
}