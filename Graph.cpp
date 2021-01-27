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
char Graph::getVertexFirst() {
    return v->getFirstVertex();
}
char Graph::getVetexSecond() {
    return v->getSecondVertex();
}
int Graph::getWeight() {
    return v->getWeight();
}

const vector<char> &Graph::getVertices() const {
    return vertices;
}

void Graph::setVertices(const vector<char> &vertices) {
    Graph::vertices = vertices;
}

Vertex *Graph::getV() const {
    return v;
}

void Graph::setV(Vertex *v) {
    Graph::v = v;
}



