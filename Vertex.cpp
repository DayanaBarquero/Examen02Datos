//
// Created by dayan on 26/1/2021.
//

#include "Vertex.h"


Vertex::Vertex(int weight, const std::string &firstVertex, const std::string &secondVertex) : weight(weight),
                                                                                              firstVertex(firstVertex),
                                                                                              secondVertex(
                                                                                                      secondVertex) {}
int Vertex::getWeight() const {
    return weight;
}

void Vertex::setWeight(int weight) {
    Vertex::weight = weight;
}

const std::string &Vertex::getFirstVertex() const {
    return firstVertex;
}

void Vertex::setFirstVertex(const std::string &firstVertex) {
    Vertex::firstVertex = firstVertex;
}

const std::string &Vertex::getSecondVertex() const {
    return secondVertex;
}

void Vertex::setSecondVertex(const std::string &secondVertex) {
    Vertex::secondVertex = secondVertex;
}



Vertex::~Vertex() {}

Vertex::Vertex() {
    weight = 0;
    firstVertex = "";
    secondVertex = "";
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


