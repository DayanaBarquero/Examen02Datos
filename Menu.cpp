//
// Created by ariad on 26/1/2021.
//

#include "Menu.h"

void Menu::menuPrincipal() {
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
                  Menu::uploadFiles();
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

                m.primAlgorithm();
                pausa();
                limpiaPantalla();
            }break;
            case 4: {
                m.kruskalAlgorithm();
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
    auto *graph = new Graph;
    File::readVertex(graph);
}

void Menu::dijkstraAlgorithm() {

}

void Menu::primAlgorithm() {

}

void Menu::kruskalAlgorithm() {

}
