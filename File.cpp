//
// Created by ariad on 26/1/2021.
//

#include "File.h"

void File::readVertex(Graph littleGraph ) {
    char a;
    char b;
    Vertex* v;
    string line = "";
    string data = "";
    fstream infile("grafoExamen.csv", ios::in);
    vector <string> data_csv;
    if (infile.is_open()) {
        while (getline(infile, line)) {
            stringstream sl(line);
            while (getline(sl, data, ';')) {
                data_csv.push_back(data);
            }
        }
        for (int unsigned i = 0; i < data_csv.size(); i++) {
            if (i % 3 == 0) {
                a = data_csv[i].at(0);
                b = data_csv[i+1].at(0);
                v = new Vertex(a, b, stoi(data_csv[i+2]));
                littleGraph.insertVertex(*v);
                cout << v->toString() << endl;
            }
        }
        infile.close();
    }
    else {
        cout << "Error al abrir el archivo para lectura" << endl;
    }
}