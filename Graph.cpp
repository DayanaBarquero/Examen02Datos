//
// Created by ariad on 26/1/2021.
//

#include "Graph.h"

Graph::Graph() {
  g=new vector<Vertex>;
}

void Graph::insertVertex(Vertex edge) {
    g->push_back(edge);
}

bool Graph::eraseEdge(Vertex edge) {
    vector<Vertex>::iterator pos;
    for(pos = g->begin(); pos != g->end(); pos++){
        if(*pos==edge){
            g->erase(pos);
            return true;
        }
    }
    return false;
}

string Graph::toString() {
    stringstream s;
    vector<Vertex>::iterator pos;
    for(pos=g->begim(); pos!=g->end();pos++){
        s<<pos->toString()<<endl;
    }
    return s.str();
}
