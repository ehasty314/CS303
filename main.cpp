#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main()
{
    int x = 100;
    int array[x];
    int count;

    ifstream inputFile;
    inputFile.open("assignment_1_array.txt");
    if (!inputFile)
        cout << "Error";
    count = 0;
    while (!inputFile.eof())
    {
        inputFile >> array[count];
        count++;
    }
    x = count;
    cout << "Array reads: ";
    for (count = 0; count < x; count++)
        cout << " " << array[count];
    cout << endl;


    int i;
    int num;
    cout << "Enter a number to search for in array\n";
    cin >> num;
    for(i=0;i<x;i++){
        if(array[i] == num){
            cout << "Element found at index " << i << endl;
            break;
        }
    }
    if(i==x){
        cout << "Element not present in array\n";
    }
    

    int oldnum;
    int newnum;
    int indexspot;
    cout << "Type index number to access data at that index.\n";
    cin >> indexspot;
    cout << "Value at spot " << indexspot << " is " << array[indexspot] << endl;
    oldnum = array[indexspot];
    cout << "Enter new value for array value.\n";
    cin >> newnum;
    cout << "Replacing value " << oldnum << " with " << newnum << endl;
    array[indexspot] = newnum;
    cout << "New value is saved, " << array[indexspot] << endl;

    int appendlength = x;
    int appendval;
    cout << "Enter the new element.\n";
    cin >> appendval;
    array[appendlength]=appendval;
    appendlength++;
    cout << "New array:\n";
    for(int t=0; t<appendlength; t++)
        cout << array[t] << " ";

    cout << endl;

    int key, p ,index = -1;
    cout << "Enter element to delete\n";
    cin >> key;

    for(p = 0;p<appendlength;p++)
    {
        if(array[p] == key)
        {
            index = p;
            break;
        }
    }
    if(index != -1)
    {
        for(p = index; p < appendlength-1; p++)
            array[p] = array[p+1];
        
        cout << "New array\n";
        for(p=0;p<appendlength-1;p++)
            cout << array[p] << " ";
    }
    else
        cout<< "Element not found\n";

    cout << endl;
    return 0;
}