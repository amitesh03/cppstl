#include <iostream>
#include <set>

using namespace std;

int main() {
    // Create a set of integers
    set<int> mySet;

    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);

    // Iterate over the set and print its elements
    for (const auto& element : mySet) {
        cout << element << " ";
    }
    cout << endl;

    // Check if an element exists in the set
    if (mySet.count(20) > 0) {
        cout << "Element 20 is present in the set" << endl;
    } else {
        cout << "Element 20 is not present in the set" << endl;
    }

    // Remove an element from the set
    mySet.erase(20);

    // Check if the element was removed
    if (mySet.count(20) > 0) {
        cout << "Element 20 is present in the set" << endl;
    } else {
        cout << "Element 20 is not present in the set" << endl;
    }

    return 0;
}
