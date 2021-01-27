//
// Created by dayan on 26/1/2021.
//

#ifndef EXAMEN02DATOS_Vertex_H
#define EXAMEN02DATOS_Vertex_H
#include <iostream>
#include <sstream>
#include<string>
class Vertex {
private:
    int weight;
    char firstVertex;
    char secondVertex;
public:
    public:
    Vertex();

    virtual ~Vertex();

    Vertex( const char &firstVertex, const char &secondVertex, int weight);

    int getWeight() const;

    void setWeight(int weight);

    const char &getFirstVertex() const;

    void setFirstVertex(const char &firstVertex);

    const char &getSecondVertex() const;

    void setSecondVertex(const char &secondVertex);

    std::string toString() const;

    bool operator==(const Vertex &rhs) const;

    bool operator!=(const Vertex &rhs) const;




};


#endif //EXAMEN02DATOS_Vertex_H
