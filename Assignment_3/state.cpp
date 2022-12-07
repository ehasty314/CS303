#include "/Users/ehast/Documents/GitHub/CS303/Assignment_3/state.h"
#include <string>
#include <map>
#include <iostream>

using namespace std;

// Write a C++ method that outputs the data stored in stateDataMap.
void print_map(map<string, string> stateDataMap) {
    for (map<string, string>::iterator it = stateDataMap.begin(); it != stateDataMap.end(); it++) {
        cout << "State: " << it->first << ", Capital: " << it->second << endl;
    }
}

// Write a C++ method that outputs the capitalName using the stateName which will be entered by the user.
void print_capital(map<string, string> stateDataMap, string state) {
    map<string, string>::iterator it = stateDataMap.find(state);
    if (it == stateDataMap.end()) {
        cout << state << " is not found" << endl;
    } else {
        cout << "Capital of " << state << " is " << it->second << endl;
    }
}