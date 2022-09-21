#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

int read_array(int arr[], int x) {
    int count;

// Reads the data from the array text file.

    ifstream inputFile;
    inputFile.open("assignment_1_array.txt");
    if (!inputFile)
        cout << "Error"; //If does not open file, error.
    count = 0;
    while (!inputFile.eof())
    {
        inputFile >> arr[count];
        count++; //Reads each integer into an array index
    }
    x = count;
    cout << "Array reads: "; //Reads array
    for (count = 0; count < x; count++)
        cout << " " << arr[count];
    cout << endl;

    return 0;
}

int int_search(int arr[], int num) { // Search the array for the first instance of a given value, then display the index of the number
    int x = 100;
    int i;
    for(i=0;i<x;i++){ // Linear search through the array to find the value
        if(arr[i] == num){
            cout << "Element found at index " << i << endl;
            break;
        }
    }
    if(i==x){ // If not found, notify user
        cout << "Element not present in array\n";
    }
    return 0;
}

int int_mod(int arr[]) { // Modify a value at a given index, then display both old and new number.
    int oldnum;
    int newnum;
    int indexspot;
    cout << "Type index number to access data at that index.\n";
    cin >> indexspot;
    cout << "Value at spot " << indexspot << " is " << arr[indexspot] << endl;
    oldnum = arr[indexspot];
    cout << "Enter new value for array value.\n";
    cin >> newnum;
    cout << "Replacing value " << oldnum << " with " << newnum << endl;
    arr[indexspot] = newnum;
    cout << "New value is saved, " << arr[indexspot] << endl;

    return 0;
}

int int_append(int arr[], int x) { // Add an extra element at the end of array, appended.
    int appendlength = x;
    int appendval;
    cout << "Enter the new element.\n";
    cin >> appendval;
    arr[appendlength]=appendval;
    appendlength++;
    cout << "New array:\n";
    for(int t=0; t<appendlength; t++)
        cout << arr[t] << " ";

    cout << endl;
    return 0;
}

int int_del(int arr[], int appendlength) { // Delete the first instance of a given number and resize the array
    int key, p ,index = -1;
    cout << "Enter element to delete\n";
    cin >> key;

    for(p = 0;p<appendlength;p++)
    {
        if(arr[p] == key)
        {
            index = p;
            break;
        }
    }
    if(index != -1)
    {
        for(p = index; p < appendlength-1; p++)
            arr[p] = arr[p+1];
        
        cout << "New array\n";
        for(p=0;p<appendlength-1;p++)
            cout << arr[p] << " ";
    }
    else
        cout<< "Element not found\n";

    cout << endl;
    return 0;
}
