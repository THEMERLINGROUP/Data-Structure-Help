#ifndef BINARY_H
#define BINARY_H
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
class BinaryTree {
    private:
        struct Node* root;
    public:
        BinaryTree() {
            root = NULL;
        }
        Node* createNode(int);
Node* insertNode(Node*, int);
Node* deleteNode(Node*, int);
void inOrder(Node*);
void preOrder(Node*); //traversing to right (key > root)
void postOrder(Node*); // traversing to left (key < root)
Node* findMinimum(Node*);
Node* getRoot() {
    return root;
}
void setRoot(Node* ptr) {
    root = ptr;
}

};










#endif /* BINARY_H */