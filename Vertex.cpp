//
// Created by dayan on 26/1/2021.
//

#include "Vertex.h"

Vertex::Vertex( const char &firstVertex, const char &secondVertex,int weight) :
                                                                                              firstVertex(firstVertex),
                                                                                              secondVertex(
                                                                                                      secondVertex),weight(weight) {}
int Vertex::getWeight() const {
    return weight;
}

void Vertex::setWeight(int weight) {
    Vertex::weight = weight;
}

const char &Vertex::getFirstVertex() const {
    return firstVertex;
}

void Vertex::setFirstVertex(const char &firstVertex) {
    Vertex::firstVertex = firstVertex;
}

const char &Vertex::getSecondVertex() const {
    return secondVertex;
}

void Vertex::setSecondVertex(const char &secondVertex) {
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

bool Vertex::operator<(const Vertex &rhs) const {
    if (weight < rhs.weight)
        return true;
    if (rhs.weight < weight)
        return false;
    if (firstVertex < rhs.firstVertex)
        return true;
    if (rhs.firstVertex < firstVertex)
        return false;
    return secondVertex < rhs.secondVertex;
}

bool Vertex::operator>(const Vertex &rhs) const {
    return rhs < *this;
}

bool Vertex::operator<=(const Vertex &rhs) const {
    return !(rhs < *this);
}

bool Vertex::operator>=(const Vertex &rhs) const {
    return !(*this < rhs);
}


