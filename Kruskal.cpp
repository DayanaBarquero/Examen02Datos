//
// Created by dayan on 26/1/2021.
//

#include "Kruskal.h"

unordered_map<char,char> Parent;
unordered_map<char,int> Rank;

Kruskal::~Kruskal() {

}
Kruskal::Kruskal() {}

char Kruskal::find(char vertex) {
    if(Parent[vertex] == vertex)
        return Parent[vertex];
    else
        return find(Parent[vertex]);

}

void Kruskal::Union(char root1, char root2) {
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

void Kruskal::makeSet(char vertex) {
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
        char u = find(e.getFirstVertex());
        char v = find(e.getSecondVertex());
        if(u != v){
            A.push_back(e);
            Union(u,v);
        }
    }
    for(const Vertex& e:A){
        cout<<e.getFirstVertex()<< " - "<<e.getSecondVertex()<<" "<< e.getWeight()<<endl;
    }

}


