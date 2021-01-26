//
// Created by dayan on 26/1/2021.
//

#include "Edge.h"

int Edge::getWeight() const {
    return weight;
}

void Edge::setWeight(int weight) {
    Edge::weight = weight;
}

const std::string &Edge::getFirstVertex() const {
    return firstVertex;
}

void Edge::setFirstVertex(const std::string &firstVertex) {
    Edge::firstVertex = firstVertex;
}

const std::string &Edge::getSecondVertex() const {
    return secondVertex;
}

void Edge::setSecondVertex(const std::string &secondVertex) {
    Edge::secondVertex = secondVertex;
}

Edge::Edge(int weight, const std::string &firstVertex, const std::string &secondVertex) : weight(weight),
                                                                                          firstVertex(firstVertex),
                                                                                          secondVertex(secondVertex) {}

Edge::~Edge() {

}

Edge::Edge() {}
