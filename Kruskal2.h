//
// Created by ariad on 26/1/2021.
//

#ifndef EXAMEN02DATOS_KRUSKAL2_H
#define EXAMEN02DATOS_KRUSKAL2_H
#include<vector>
/*#include<iostream>

struct Edge{
    char vertex1;
    char vertex2;
    int weight;
    Edge(char v1, char v2, int w):vertex1(v1),vertex2(v2),weight(w){}
};

struct Kruskal2
{
    vector<char> vertices;
    vector<Edge> edges;
};

unordered_map<char,char> PARENT;
unordered_map<char, int> RANK;

char Find(char vertex){
    if(PARENT[vertex]==vertex)
        return PARENT[vertex];
    else
        return Find(PARENT[vertex]);
}

void Union(char root1, char root2)
{
    if(RANK[root1]>RANK[root2]){
        PARENT[root2]=root1;
    }
    else if(RANK[root2]>RANK[root1]){
        PARENT[root1]=root2;
    }
    else{
        PARENT[root1]=root2;
        RANK[root2]++;
    }
}

void MakeSet(char vertex){
    PARENT[vertex] = vertex;
    RANK[vertex] = 0;
}

void Kruskal(Graph& g)
{
    vector<Edge> A;
    for(auto c: g.vertices){
        Makeset(c);
    }
    sort(g.edges.begin(),g.edges.end(), [](Edge x, Edge y)
    {return x.weight<y.weight;});

    for(Edge e: g.edges){
        char root1 = Find(e.vertex1);
        char root2 = Find(e.vertex2);
        if(root1!=root2){
            A.push_back(e);
            Union(root1, roo2);
        }
    }

    for(Edge e: A){
        cout << e.vertex1 << "----" << e.vertex2 << " " e.weight << endl;
    }
}*/

#endif //EXAMEN02DATOS_KRUSKAL2_H
