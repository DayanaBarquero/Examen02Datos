//
// Created by ariad on 26/1/2021.
//

#include "File.h"

void Files::readVertex(vector<Vertex*> vertexs ) {
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
                v = new Vertex(data_csv[i], data_csv[i+1], stoi(data_csv[i+2]));
                vertexs.push_back(v);
                cout << v->toString() << endl;
            }
        }
        infile.close();
    }
    else {
        cout << "Error al abrir el archivo para lectura" << endl;
    }
}