//
// Created by ariad on 26/1/2021.
//

#include "Graph.h"

Graph::Graph() {
    V=9;
    E=14;
  g = new vector<Vertex>;

}

void Graph::insertVertex(const Vertex& edge) {
    g->push_back(edge);
}

bool Graph::eraseEdge(const Vertex& edge) {
    vector<Vertex>::iterator pos;
    for(pos = g->begin(); pos != g->end(); pos++){
        if(*pos == edge){
            g->erase(pos);
            return true;
        }
    }
    return false;
}


string Graph::toString() {
    stringstream s;
    vector<Vertex>::iterator pos;
    for(pos=g->begin(); pos!=g->end();pos++){
       s<<pos->toString()<<endl;
    }
    return s.str();
}

bool Graph::isAdjacent(char u, char v) {
    vector<Vertex>::iterator pos;
    for(pos=g->begin(); pos !=g->end();pos++){
        if(pos->getFirstVertex()==u||pos->getSecondVertex()==v){
            if(pos->getSecondVertex()==u||pos->getFirstVertex()==v)
                return true;
        }
    }
    return false;
}

vector<Vertex> *Graph::getG() const {
    return g;
}

void Graph::setG(vector<Vertex> *g) {
    Graph::g = g;
}
Graph::Graph(int V, int E) {
    this->V=V;
    this->E=E;
}
void Graph::addEdge(int u, int v, int w) {
    edges.push_back({w,{u,v}});
}
int Graph::kruskalMST() {
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





