//
// Created by ariad on 26/1/2021.
//

#ifndef EXAMEN02DATOS_DIJKSTRA2_H
#define EXAMEN02DATOS_DIJKSTRA2_H

#include <unordered_map>
#include <vector>
#include <limits>
#include <algorithm>
#include <iostream>

using namespace std;

class DijkstraAlgorithm{
    unordered_map<char, const unordered_map<char, int>> vertices;
public:
    void insertVertex(char name, const unordered_map<char, int>& weight);
    vector<char> dijkstraAlgorithm(char start, char finish);

};
#endif //EXAMEN02DATOS_DIJKSTRA2_H
