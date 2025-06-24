#ifndef NODE_H
#define NODE_H

class Node {
private:
	int data;
	Node* next;
public:
	Node(int data) : data(data), next(nullptr) {}
    int Getdata() {
        return data;
    }
    Node*& Getnext() {
        return next;
    }
};
#endif