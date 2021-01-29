//
// Created by dayan on 26/1/2021.
//

#include "Kruskal.h"
/*
unordered_map<string,string> Parent;
unordered_map<string,int> Rank;

Kruskal::~Kruskal() {
    delete graph;
}

string Kruskal::find(const string& vertex) {
    if(Parent[vertex] == vertex)
        return Parent[vertex];
    else
        return find(Parent[vertex]);

}

void Kruskal::Union(const string& root1, const string& root2) {
    if(Rank[root1] > Rank[root2]){
        Parent[root2] = root1;
    }
    else{
        if(Rank[root2] > Rank[root1]){
            Parent[root1]=root2;
        }
        else{
            Parent[root1] = root2;
            Rank[root2]++;
        }
    }
}

void Kruskal::makeSet(const string& vertex) {
    Parent[vertex] = vertex;
    Rank[vertex] = 0;
}

void Kruskal::kruskaMST() {
    vector<Vertex> A;
    for (const auto& c:*graph->getG()) {
       //makeSet(c);
    }
   sort(graph->getG()->begin(),graph->getG()->end(),[](const Vertex& x,const Vertex& y)
    {return x.getWeight() < y.getWeight();});

    for(const Vertex& e:*graph->getG()){
        string u = find(e.getFirstVertex());
        string v = find(e.getSecondVertex());
        if(u != v){
            A.push_back(e);
            Union(u,v);
        }
    }
    for(const Vertex& e:A){
        cout<<e.getFirstVertex()<< " - "<<e.getSecondVertex()<<" "<< e.getWeight()<<endl;
    }

}

Kruskal::Kruskal(Graph *graph) : graph(graph) {

}

Kruskal::Kruskal() {
    graph = new Graph;
}
 */


