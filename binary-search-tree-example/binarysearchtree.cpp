#include<iostream>
#include <stdlib.h>
#include <cstdlib>
extern "C" {
    #include "binary.h"
}
using namespace std;
struct Node {
    int data;
    Node* left; // root > key
    Node* right; // root < key
};
Node* BinaryTree:: createNode(int n) {
    Node* newNode = new struct Node();
    newNode-> data = n;
    newNode-> left = NULL;
    newNode-> right = NULL;
    return newNode;
}
Node* BinaryTree:: findMinimum(Node* rootPtr) {
    while(rootPtr->left != NULL) {
        rootPtr = rootPtr-> left;
    }
    return rootPtr;
}
Node* BinaryTree:: insertNode(Node* rootPtr, int n) {
    if(rootPtr == NULL) {
        return createNode(n);
    }
    if(n < rootPtr-> data) {
        rootPtr-> left = insertNode(rootPtr-> left, n);

    }
    if(n > rootPtr->data) {
        rootPtr-> right = insertNode(rootPtr-> right, n);
    }
    return rootPtr;
}
Node* BinaryTree:: deleteNode(Node* rootPtr, int n) {
    if(rootPtr == NULL) {
        cout << "NODE to be deleted is NULL"<< endl;
        return rootPtr;
    } else if (n< rootPtr-> data){
        rootPtr-> left = deleteNode(rootPtr-> left, n);
    } else if(n> rootPtr->data) {
        rootPtr -> right = deleteNode(rootPtr-> right, n);
    } else {
        if(rootPtr-> left == NULL && rootPtr-> right==NULL) {
            delete rootPtr;
            rootPtr = NULL;
        } else if(root-> left == NULL) {
            struct Node* val = rootPtr;
            rootPtr = rootPtr -> left;
            delete val;
        } else if(root -> right == NULL) {
            struct Node* val = rootPtr;
            rootPtr = rootPtr-> right;
            delete val;
        } else {
            Node* val = findMinimum(rootPtr->right);
            rootPtr-> data = val-> data;
            rootPtr-> left = deleteNode(rootPtr->right, val -> data);
        }

    }
    return rootPtr;
}
void BinaryTree:: inOrder(Node* root) {
if(root == NULL) {
    return;
}
inOrder(root->left); //Binarysearch trees the minimum value starts on left 
cout <<root->data<< "\t";
inOrder(root->right);
}
void BinaryTree:: preOrder(Node* root) {
    if(root == NULL) return;
    cout <<root->data<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}
void BinaryTree::postOrder(Node* root) {
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
}