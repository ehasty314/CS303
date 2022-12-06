#include <iostream>
#include <queue>
using namespace std;


std::queue<int> myQ;//declaring Queue

void move_to_rear(){

    int num=myQ.front();

    myQ.pop();

    myQ.push(num);
}

int main ()
{
    myQ.push(1);
    myQ.push(2);
    myQ.push(3);
    myQ.push(4);
    myQ.push(5);
    myQ.push(6);
    myQ.push(7);

    std::cout<<"Before removing front"<<std::endl;
    std::cout<<myQ.front()<<std::endl;
    std::cout<<"After removing front and adding it to rear"<<std::endl;
    move_to_rear();
    std::cout<<myQ.front()<<std::endl;

return 0;
}