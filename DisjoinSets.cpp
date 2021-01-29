//
// Created by dayan on 28/1/2021.
//

#include "DisjoinSets.h"

DisjoinSets::DisjoinSets(int n) {
    this->n=n;
    parent = new int[n+1];
    rnk = new int [n+1];
    for(int i=0;i<=n;i++){
        rnk[i] = 0;
        parent[i]=i;
    }
}

int DisjoinSets::find(int u) {
    if(u != parent[u])
        parent[u] = find(u);
    return parent[u];
}

void DisjoinSets::merge(int x, int y) {
    x=find(x),y=find(y);
    if(rnk[x] > rnk[y])
        parent[y]=x;
    else
        parent[x] = y;
    if(rnk[x] == rnk[y])
        rnk ++;
}
