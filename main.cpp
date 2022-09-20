#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main()
{
    int x = 100;
    int array[x];
    int count;

// Reads the data from the array text file.

    ifstream inputFile;
    inputFile.open("assignment_1_array.txt");
    if (!inputFile)
        cout << "Error"; //If does not open file, error.
    count = 0;
    while (!inputFile.eof())
    {
        inputFile >> array[count];
        count++; //Reads each integer into an array index
    }
    x = count;
    cout << "Array reads: "; //Reads array
    for (count = 0; count < x; count++)
        cout << " " << array[count];
    cout << endl;

// Search for an index value

    int i;
    int num;
    cout << "Enter a number to search for in array\n";
    cin >> num;
    for(i=0;i<x;i++){ // Linear search through the array to find the value
        if(array[i] == num){
            cout << "Element found at index " << i << endl;
            break;
        }
    }
    if(i==x){ // If not found, notify user
        cout << "Element not present in array\n";
    }
    
    // Access data in the array and modify, as well as see old and new value

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

// Append new value at the end of the array

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

    // Finds the first instance of a value in the array, and deletes it
    // Adjusts the array size accordingly

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