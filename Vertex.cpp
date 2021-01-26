//
// Created by dayan on 26/1/2021.
//

#include "Vertex.h"

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

Vertex::Vertex(int weight, std::string firstVertex, std::string secondVertex) : weight(weight),
                                                                                          firstVertex(std::move(firstVertex)),
                                                                                          secondVertex(std::move(secondVertex)) {}

Vertex::~Vertex() {}

Vertex::Vertex() {
    weight = 0;
    firstVertex = "";
    secondVertex = "";
}

bool Vertex::operator==(const Vertex &e2) const {
    return getFirstVertex() == e2.getFirstVertex() && getSecondVertex() == e2.getSecondVertex();
}
std::string Vertex::toString() const {
    std::stringstream s;
    s<<"Vertix 1:"<<getFirstVertex()<<std::endl;
    s<<"Vertix 2:"<<getSecondVertex()<<std::endl;
    s<<"Weight:"<<getWeight()<<std::endl;
    return s.str();

}