//
// Created by ariad on 26/1/2021.
//

#include "Dijkstra.h"


Dijkstra::Dijkstra(int V) {
    this->V=V;
    adj=new list<pair<int,int>>[V];
}

void Dijkstra::addEdge(int u, int v, int w) {
      adj[u].push_back(make_pair(v,w));
      adj[v].push_back(make_pair(u,w));
}

void Dijkstra::dijkstraAlgorithm(int src) {
    set<pair<int, int>>setds;
    vector<int> dist(V,INF);
    setds.insert(make_pair(0,src));
    dist[src]=0;
    while(!setds.empty()){
        pair<int,int> tmp= *(setds.begin());
        setds.erase(setds.begin());
        int u= tmp.second;
        list<pair<int,int>>::iterator i;
        for(i=adj[u].begin();i!=adj[u].end();++i){
            int v=(*i).first;
            int weight=(*i).second;
            if(dist[v]>dist[u]+weight){
                if(dist[v]!=INF)
                    setds.erase(setds.find(make_pair(dist[v],v)));
                dist[v]=dist[u]+weight;
                setds.insert(make_pair(dist[v],v));
            }
        }
    }
    cout<<"Short path"<<endl;
    for(int i=0;i<V;++i)
        cout<<i<<"\t\t"<<dist[i]<<endl;
}

void Dijkstra::print(vector<int> vec) {
    vector<int>::iterator it;
    for(it=vec.begin();it !=vec.end();++it);
    cout<<*it<<"\t";
}

