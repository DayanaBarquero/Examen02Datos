//
// Created by ariad on 26/1/2021.
//

#ifndef EXAMEN02DATOS_MENU_H
#define EXAMEN02DATOS_MENU_H
#include "File.h"
#include "Graph.h."
#include "Dijkstra2.h"
#include"Tools.h"

class Menu {
private:


public:
    static void menuPrincipal();
    static void uploadFiles();
    void dijkstraAlgorithm();
    void primAlgorithm();
    static void kruskalAlgorithm();
};


#endif //EXAMEN02DATOS_MENU_H
