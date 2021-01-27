//
// Created by dayan on 26/1/2021.
//

#ifndef EXAMEN02DATOS_Vertex_H
#define EXAMEN02DATOS_Vertex_H
#include <iostream>
#include <sstream>
#include<string>
using namespace std;
class Vertex {
private:
    int weight;
    string firstVertex;
    string secondVertex;
public:
    public:
    Vertex();

    virtual ~Vertex();

    Vertex( const string &firstVertex, const string &secondVertex, int weight);

    int getWeight() const;

    void setWeight(int weight);

    const string &getFirstVertex() const;

    void setFirstVertex(const string &firstVertex);

    const string &getSecondVertex() const;

    void setSecondVertex(const string &secondVertex);

    std::string toString() const;

    bool operator==(const Vertex &rhs) const;

    bool operator!=(const Vertex &rhs) const;




};


#endif //EXAMEN02DATOS_Vertex_H
