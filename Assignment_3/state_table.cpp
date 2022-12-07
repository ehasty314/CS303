#include <iostream>
#include <string>
#include <map>

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

int main() {
    // Declare the map container stateDataMap to store pairs of the form (stateName, capitalName), where stateName and capitalName are variables of type string:
    map<string, string> stateDataMap;

    // Write C++ statements that add the following pairs to stateDataMap:
    // (Nebraska, Lincoln), (New York, Albany), (Ohio, Columbus), (California, Sacramento), (Massachusetts, Boston), and (Texas, Austin).
    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";

    // Write a C++ method that outputs the data stored in stateDataMap.
    print_map(stateDataMap);

    // Write a C++ statement that changes the capital of California to Los Angeles
    stateDataMap["California"] = "Los Angeles";

    // Write a C++ method that outputs the capitalName using the stateName which will be entered by the user.
    string state;
    cout << "Enter state name: ";
    getline(cin, state);
    print_capital(stateDataMap, state);
    return 0;
}