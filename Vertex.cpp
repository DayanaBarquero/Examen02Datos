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

Vertex::Vertex(int weight, const std::string &firstVertex, const std::string &secondVertex) : weight(weight),
                                                                                          firstVertex(firstVertex),
                                                                                          secondVertex(secondVertex) {}

Vertex::~Vertex() {

}

Vertex::Vertex() {}
