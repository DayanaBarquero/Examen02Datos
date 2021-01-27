//
// Created by dayan on 26/1/2021.
//

#include "Kruskal.h"

unordered_map<string,string> Parent;
unordered_map<string,int> Rank;

Kruskal::~Kruskal() {

}
Kruskal::Kruskal() {}

string Kruskal::find(string vertex) {
    if(Parent[vertex] == vertex)
        return Parent[vertex];
    else
        return find(Parent[vertex]);

}

void Kruskal::Union(string root1, string root2) {
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

void Kruskal::makeSet(string vertex) {
    Parent[vertex] = vertex;
    Rank[vertex] = 0;
}

void Kruskal::kruskaMST(Graph &g) {
    vector<Vertex> A;
    for (auto c:g.getVertices()) {
        makeSet(c);
    }
    /*sort(g.getG()->begin(),g.getG()->end(),[](Graph x,Graph y)
    {return x.getWeight() < y.getWeight();});
*/
    for(const Vertex& e:*g.getG()){
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


