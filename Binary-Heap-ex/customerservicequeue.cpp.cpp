#include<iostream>
using namespace std;
#include<fstream>
#include <queue>
main() {
    std::priority_queue <int> id;
    id.push(1239);
    id.push(1238);
    id.push(1237);
    id.push(1236);
    while (id.empty() == false) {
        cout << id.top() <<"  ";
        cout << " is your place in line." <<endl;
        id.pop();
    }
    return 0;
}