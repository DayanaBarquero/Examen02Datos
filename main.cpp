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
    char dest_node = 'G';

    Dijkstra2 g;
    g.add_vertex('A', {{'B', 1}, {'C', 4}, {'F', 2}});
    g.add_vertex('B', {{'E', 2}});
    g.add_vertex('C', {{'G', 2}, {'D', 4}});
    g.add_vertex('D', {});
    g.add_vertex('E', {{'D', 3}});
    g.add_vertex('F', {{'C', 1}, {'G', 4}});
    g.add_vertex('G', {{'E', 5}});

    cout << "As initial node: " << init_node << endl;
    cout << "As goal node: " << dest_node << endl;


    for (char vertex : g.shortest_path(init_node, dest_node))
    {
        cout << "Solution path from goal sequence : " << seq << " Node : " << vertex << endl;
        seq++;
    }

    cout << "Solution path from goal sequence : " << seq << " Node : " << init_node << endl;



    return 0;
}