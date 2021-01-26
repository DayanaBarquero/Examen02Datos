//
// Created by ariad on 26/1/2021.
//

#include "Tools.h"
#include <sstream>

void imprimeCadenaEndl(const string& cadena)
{
    cout << cadena << endl;
}

void imprimeCadena(const string& cadena) {
    cout << cadena;
}

void imprimeError(const string& cadena)
{
    cout << '\a';
    cerr << "\n\t\t[ ERROR ] \n\t" << cadena << endl;
}

string leerCadena() {
    string cadena;
    cin.clear();
    getline(cin, cadena);
    return cadena;
}

int leerEntero() {
    int numero;
    bool continuar = true;
    while (true) {
        if (cin >> numero) {
            cin.clear();
            cin.ignore(1024, '\n');
            return numero;
        }
        else {
            cout << '\a';
            cerr << "\n\t\t[ ERROR ] \n\tValor incorrecto... digite un numero -> : ";

            cin.clear();
            cin.ignore(1024, '\n');
        }
    }
}

float leerFlotante() {
    float numeroDecimal;
    bool continuar = true;
    while (true) {
        if (cin >> numeroDecimal) {
            cin.clear();
            cin.ignore(1024, '\n');
            return numeroDecimal;
        }
        else {
            cout << '\a';
            cerr << "\n\t\t[ ERROR ] \n\tValor incorrecto... digite un numero -> : ";

            cin.clear();
            cin.ignore(1024, '\n');
        }
    }
}

void limpiaPantalla() {
    system("cls");
}

void pausa() {
    system("pause");
}