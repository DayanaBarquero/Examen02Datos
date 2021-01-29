//
// Created by ariad on 26/1/2021.
//

#include "Menu.h"

void Menu::menuPrincipal() {
    int V=9,E=14;
    Graph graph;
    Graph graph1(V,E);
    Menu m;
    int opcion;
    bool flag = true;
    imprimeCadenaEndl("Welcome to the program.");
    do {
        imprimeCadenaEndl("      ___________________________________________________________");
        imprimeCadenaEndl("     |                                                          |");
        imprimeCadenaEndl("     |                        Graph Manager                     |");
        imprimeCadenaEndl("     |__________________________________________________________|");
        imprimeCadenaEndl("     |-->DIGITE 1:| Load automatic data                         |");
        imprimeCadenaEndl("     | ---------------------------------------------------------|");
        imprimeCadenaEndl("     |-->DIGITE 2:| Dijkstra Algorithm                          |");
        imprimeCadenaEndl("     | ---------------------------------------------------------|");
        imprimeCadenaEndl("     |-->DIGITE 3:| Kruskal Algorithm                           |");
        imprimeCadenaEndl("     | ---------------------------------------------------------|");
        imprimeCadenaEndl("     |-->DIGITE 4:| Prim Algorithm                              |");
        imprimeCadenaEndl("     |----------------------------------------------------------|");
        imprimeCadenaEndl("     |-->DIGITE 5:| Final                                       |");
        imprimeCadenaEndl("     |__________________________________________________________|");

        imprimeCadenaEndl("Enter the option you want to carry out: ");
        cin >> opcion;

        switch (opcion) {
            case 1: {
                try {
                    File::readVertex(graph);
                }
                catch (exception& e) {
                    imprimeCadenaEndl("The file can´t be opened.");
                }
                pausa();
                limpiaPantalla();
            }break;

            case 2: {
                m.dijkstraAlgorithm();
                pausa();
                limpiaPantalla();
            }break;
            case 3: {
                graph1.addEdge(0,1,10);
                graph1.addEdge(0,2,12);
                graph1.addEdge(1,2,9);
                graph1.addEdge(1,3,8);
                graph1.addEdge(2,4,3);
                graph1.addEdge(2,5,1);
                int d;
                d = graph1.kruskalMST();
                cout<<"Peso: "<<d;
                pausa();
                limpiaPantalla();
            }break;
            case 4: {
                m.primAlgorithm();
                pausa();
                limpiaPantalla();
            }break;
            case 5: {
                cout << "El programa ha finalizado";
                flag = false;
            }break;
            default: {
                imprimeError("La opcion no es valida");
                pausa();
                limpiaPantalla();
            }break;
        }
    } while (flag);

}

void Menu::uploadFiles() {

}

void Menu::dijkstraAlgorithm() {

}

void Menu::primAlgorithm() {

}

