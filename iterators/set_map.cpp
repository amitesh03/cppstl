#include <iostream>
#include <map>
#include <set>
#include <vector> // Include the <vector> header
#include <string> // Include the <string> header
using namespace std; 
int main()
{
    map<int, string> myMap = {{1, "apple"}, {2, "banana"}, {3, "cherry"}};
    set<int> mySet = {4, 5, 6};

    // Iterate over the second elements of the map
    for (const auto &pair : myMap)
    {
        cout<< pair.second << endl;
    }

    // Iterate over the elements of the set
    for (const auto &element : mySet)
    {
        cout << element << endl;
    }

    vector<vector<int>> myVector; // Declare the myVector variable

    myVector = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Assign values to myVector

    // Iterate over the elements of the vector of vectors
    for (const auto &innerVector : myVector)
    {
        for (const auto &element : innerVector)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}