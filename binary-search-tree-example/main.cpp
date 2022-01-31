#include<iostream>
#include <stdlib.h>
#include <cstdlib>
#include "binary.h"
using namespace std;

int main()
{
  BinaryTree l1;
  int ch, ele, res; 
  Node* ptr;
    do {
            cout<<"1 - Insert Node\n";
            cout<<"2 - IN-ORDER Traversal\n";
            cout<<"3 - PRE-ORDER Traversal\n";
            cout<<"4 - POST-ORDER Traversal\n";
            cout<<"Enter choice\n";
            cin>>ch;
            switch(ch) {
                case 1: 
                    cout<<"Entre element to insert to the List\n";
                    cin>>ele;

                    ptr = l1.insertNode(l1.getRoot(), ele);
  
                    l1.setRoot(ptr);
                    break;
                case 2:
                    cout<<"---IN-ORDER TRAVERSAL---"<<endl;
                    l1.inOrder(l1.getRoot());
                    cout<<endl;
                    break;
                case 3:
                    cout<<"---PRE-ORDER TRAVERSAL---"<<endl; //items traverse from right (largest values first)
                    l1.preOrder(l1.getRoot());
                    cout<<endl;
                    break;
                case 4:
                    cout<<"---POST-ORDER TRAVERSAL---"<<endl; //items traverse from left (min values first)
                    l1.postOrder(l1.getRoot());
                    cout<<endl;
                    break;
                case 5:
                    cout<<"Enter node to be deleted."<<endl;
                    cin>>ele;
                    ptr = l1.deleteNode(l1.getRoot(), ele);
                    l1.setRoot(ptr);
                default: cout<<"Invalid choice"<<endl;
            }
    } while(ch >=1 && ch <= 5); 
return 0;
}