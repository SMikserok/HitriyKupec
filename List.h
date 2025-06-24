#ifndef LIST_H
#define LIST_H
using namespace std;
#include "Node.h"
#include <vector>
#include <algorithm>

class List {
private:
    Node* head;

public:
    List() : head(nullptr) {}
    void Add(int data);
    vector<int> simulate(int Month, int Step, int toRemove, int size);
};

#endif