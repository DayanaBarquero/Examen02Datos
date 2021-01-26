//
// Created by dayan on 26/1/2021.
//

#ifndef EXAMEN02DATOS_EDGE_H
#define EXAMEN02DATOS_EDGE_H
#include <iostream>

class Edge {
private:
    int weight;
    std::string firstVertex;
    std::string secondVertex;
public:
    Edge();

    virtual ~Edge();

    Edge(int weight, const std::string &firstVertex, const std::string &secondVertex);

    int getWeight() const;

    void setWeight(int weight);

    const std::string &getFirstVertex() const;

    void setFirstVertex(const std::string &firstVertex);

    const std::string &getSecondVertex() const;

    void setSecondVertex(const std::string &secondVertex);

};


#endif //EXAMEN02DATOS_EDGE_H
