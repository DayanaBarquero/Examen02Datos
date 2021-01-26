//
// Created by dayan on 26/1/2021.
//

#ifndef EXAMEN02DATOS_Vertex_H
#define EXAMEN02DATOS_Vertex_H

/*
#pragma once
#include <iostream>
#include <sstream>
using namespace std;



class Vertex {
private:
    string vertex1;
    string vertex2;
    int weight;
public:
    Vertex(string = "", string = "", int = 0);
    string getVertex1();
    string getVertex2();
    int getWeight();
    void setVertex1(string);
    void setVertex2(string);
    void setWeight(int);
    string toString();
    ~Vertex();
};*/
#include <iostream>
#include <sstream>
#include<string>
class Vertex {
private:
    int weight;
    std::string firstVertex;
    std::string secondVertex;
public:
    public:
    Vertex();

    virtual ~Vertex();

    Vertex( const std::string &firstVertex, const std::string &secondVertex, int weight);

    int getWeight() const;

    void setWeight(int weight);

    const std::string &getFirstVertex() const;

    void setFirstVertex(const std::string &firstVertex);

    const std::string &getSecondVertex() const;

    void setSecondVertex(const std::string &secondVertex);

    std::string toString() const;

    bool operator==(const Vertex &rhs) const;

    bool operator!=(const Vertex &rhs) const;




};


#endif //EXAMEN02DATOS_Vertex_H
