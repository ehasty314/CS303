#include <iostream>
#include <fstream>
#include <iomanip>
#include "header.h"

using namespace std;

int main() {

    int x = 100;
    int array[x];
    read_array(array, x);

    int number;
    cout << "Enter a number to search the array for: ";
    cin >> number;
    int_search(array, number);

    int_mod(array);

    int_append(array, x);

    int_del(array, x);
}