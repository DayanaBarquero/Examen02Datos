//
// Created by ariad on 26/1/2021.
//

#include "File.h"

void Files::readVertex(Graph *vertexs ) {
    Vertex *v;
    char line = ' ';
    char data = ' ';
    fstream infile("grafoExamen.csv", ios::in);
    vector<char> data_csv;
    if (infile.is_open()) {
        while (getline(infile, line,"\n")) {
            char sl(line);
            while (getline(sl, data, ',')) {
                data_csv.push_back(data);
            }
        }
        for (int unsigned i = 0; i < data_csv.size(); i++) {
            if (i % 3 == 0) {
                v = new Vertex(data_csv[i], data_csv[i + 1], (data_csv[i + 2]));
                vertexs->insertVertex(*v);
                cout << v->toString() << endl;
            }
        }
        infile.close();
    } else {
        cout << "Error al abrir el archivo para lectura" << endl;
    }
}