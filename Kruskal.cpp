//
// Created by dayan on 26/1/2021.
//

#include "Kruskal.h"
Kruskal::Kruskal(int V, int E) {
    this->V=V;
    this->E=E;
}
void Kruskal::addEdge(int u, int v, int w) {
    edges.push_back({w,{u,v}});
}
int Kruskal::kruskalMST() {
    int mst = 0;
    sort(edges.begin(),edges.end());
    DisjoinSets ds(V);
    vector<pair<int,iPair>>::iterator it;
    for(it=edges.begin();it!=edges.end();it++){
        int u = it->second.first;
        int v = it->second.second;
        int setU = ds.find(u);
        int setV = ds.find(v);
        if(setU != setV){
            cout<<char( u + 65) <<" - "<< char(v + 65) <<endl;
            mst += it->first;
            ds.merge(setU,setV);
        }
    }
    return mst;
}