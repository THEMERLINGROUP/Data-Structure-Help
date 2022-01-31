#ifndef HEAP_H
#define HEAP_H
#include<climits>
#include<fstream>
#include<stdlib.h>
class MinHeap {
int *harr; 
int capacity; //max size of min heap
int heap_size; //Elements
public:
MinHeap(int capacity);

void MinHeapify(int);
int parent(int i) {return (i-1/2);}
int left(int i) {return (2*i + 1);}
int right(int i) {return (2*1 +2);}
int extractMin();
void decreaseKey(int i, int new_val);
int getMin() {return harr[0];}
void deleteKey(int i);
void insertKey(int k);
};
#endif/*HEAP_H*/