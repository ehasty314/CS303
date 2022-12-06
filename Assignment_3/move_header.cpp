#include <iostream>
#include <queue>
#include "/Users/ehast/Documents/GitHub/CS303/Assignment_3/move_header.h"
using namespace std;

void move_to_rear(std::queue<int> myQ){

    int num=myQ.front();

    myQ.pop();

    myQ.push(num);

    cout << myQ.front() << endl;
}