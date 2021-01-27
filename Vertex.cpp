//
// Created by dayan on 26/1/2021.
//

#include "Vertex.h"

Vertex::Vertex( const string &firstVertex, const string &secondVertex,int weight) :
                                                                                              firstVertex(firstVertex),
                                                                                              secondVertex(
                                                                                                      secondVertex),weight(weight) {}
int Vertex::getWeight() const {
    return weight;
}

void Vertex::setWeight(int weight) {
    Vertex::weight = weight;
}

const string &Vertex::getFirstVertex() const {
    return firstVertex;
}

void Vertex::setFirstVertex(const string &firstVertex) {
    Vertex::firstVertex = firstVertex;
}

const string &Vertex::getSecondVertex() const {
    return secondVertex;
}

void Vertex::setSecondVertex(const string &secondVertex) {
    Vertex::secondVertex = secondVertex;
}



Vertex::~Vertex() {}

Vertex::Vertex() {
    weight = 0;
    firstVertex = ' ';
    secondVertex = ' ';
}


std::string Vertex::toString() const {
    std::stringstream s;
    s<<"Vertex: ("<<getFirstVertex()<<","<<getSecondVertex()<<")"<<std::endl;
    s << "Weight:" << getWeight() << std::endl;
    return s.str();
}


bool Vertex::operator==(const Vertex &rhs) const {
    return weight == rhs.weight &&
           firstVertex == rhs.firstVertex &&
           secondVertex == rhs.secondVertex;
}

bool Vertex::operator!=(const Vertex &rhs) const {
    return !(rhs == *this);
}


