//
// Created by dayan on 28/1/2021.
//

#ifndef EXAMEN02DATOS_DISJOINSETS_H
#define EXAMEN02DATOS_DISJOINSETS_H


class DisjoinSets {
private:
    int *parent,*rnk;
    int n;
public:
    explicit DisjoinSets(int);
    int find(int u);
    void merge(int x,int y);
};


#endif //EXAMEN02DATOS_DISJOINSETS_H
