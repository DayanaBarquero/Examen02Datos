//
// Created by ariad on 26/1/2021.
//

#ifndef EXAMEN02DATOS_TOOLS_H
#define EXAMEN02DATOS_TOOLS_H

#include <iostream>
#include <string>
#include <windows.h>
#include <typeinfo>
using namespace std;


template<typename T>
void convert(T const& dato) {
    cout << dato << endl;
}

void imprimeCadenaEndl(const string&);
void imprimeCadena(const string&);
void imprimeError(const string&);
void limpiaPantalla();
string leerCadena();
int leerEntero();
float leerFlotante();
void pausa();


#endif //EXAMEN02DATOS_TOOLS_H
