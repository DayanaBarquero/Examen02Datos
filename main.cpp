//
// Created by dayan on 26/1/2021.
//
#include <iostream>
#include"Graph.h"
#include "Kruskal.h"
#include "Dijkstra2.h"
int main(){
  /*  Vertex d;
    d.setFirstVertex("A");
    d.setSecondVertex("B");
    d.setWeight(8);
    cout<<d.toString();
   Graph graph;
   graph.insertVertex(d);
   cout<<graph.toString();
   Kruskal f;
   f.kruskaMST(graph);*/

    int seq = 0;
    char init_node = 'A';
    char dest_node = 'I';

    DijkstraAlgorithm g;
    g.insertVertex('A', {{'B', 8}, {'C', 12}});
    g.insertVertex('B', {{'C', 9},{'D',8}});
    g.insertVertex('C', {{'E', 3}, {'F', 1}});
    g.insertVertex('D', {{'E', 7}, {'F', 11}, {'H',5},{'G',8}});
    g.insertVertex('E', {{'F', 3}});
    g.insertVertex('F', {{'H', 6}});
    g.insertVertex('G', {{'H', 9},{'I',2}});
    g.insertVertex('H', {{'I', 11}});
    g.insertVertex('I',{});

    cout << "As initial node: " << init_node << endl;
    cout << "As goal node: " << dest_node << endl;


    for (char vertex : g.dijkstraAlgorithm(init_node, dest_node))
    {

        cout << seq << " Node : " << vertex << endl;
        seq++;
    }

    cout <<seq<< " Node : " << init_node << endl;



    return 0;
}