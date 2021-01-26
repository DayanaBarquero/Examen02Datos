//
// Created by dayan on 26/1/2021.
//

#ifndef EXAMEN02DATOS_Vertex_H
#define EXAMEN02DATOS_Vertex_H
#include <iostream>
#include <sstream>
class Vertex {
private:
    int weight;
    std::string firstVertex;
    std::string secondVertex;
public:
    Vertex();

    virtual ~Vertex();

    Vertex(int weight, std::string firstVertex, std::string secondVertex);

    int getWeight() const;

    void setWeight(int weight);

    const std::string &getFirstVertex() const;

    void setFirstVertex(const std::string &firstVertex);

    const std::string &getSecondVertex() const;

    void setSecondVertex(const std::string &secondVertex);

    std::string toString();

    bool operator == (const Vertex& e2) const;


};


#endif //EXAMEN02DATOS_Vertex_H
