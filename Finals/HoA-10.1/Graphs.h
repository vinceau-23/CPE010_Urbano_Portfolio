#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>

struct adjNode {
    int val;
    int cost;
    adjNode* next;
};

struct graphEdge {
    int start_ver;
    int end_ver;
    int weight;
};

class DiaGraph {
private:
    int N;
    adjNode* getAdjListNode(int value, int weight, adjNode* head);

public:
    adjNode** head;
    DiaGraph(graphEdge edges[], int n, int N);
    ~DiaGraph();
    void displayAdjList(int i);
};


#endif