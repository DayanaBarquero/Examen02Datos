//
// Created by dayan on 26/1/2021.
//

#ifndef EXAMEN02DATOS_KRUSKAL_H
#define EXAMEN02DATOS_KRUSKAL_H
#include <iostream>
#include <vector>
typedef std::pair<int,int> iPair;
class Kruskal {
private:
    int V,E;
    std::vector< std::pair <int,iPair >> edges;
public:
    Kruskal(int V,int E);



};


#endif //EXAMEN02DATOS_KRUSKAL_H
