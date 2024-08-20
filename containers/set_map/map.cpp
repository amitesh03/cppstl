#include <iostream>
#include <map>
using namespace std;
int main() {
    // Create a map with string keys and integer values
    map<string, int> myMap;

    // Insert key-value pairs into the map
    myMap["Alice"] = 25;
    myMap["Bob"] = 30;
    myMap["Charlie"] = 35;

    // Access values using keys
    cout << "Bob's age: " << myMap["Bob"] << endl;

    // Iterate over the map
    for(const auto& pair : myMap){
        cout<< pair.first << ": " << pair.second << endl;
    }

    return 0;
}