#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare a vector to store integers
    vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access and modify elements in the vector
    numbers[1] = 25;

    // Print the elements in the vector
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Insert an element at a specific position
    numbers.insert(numbers.begin() + 2, 15);

    // Remove an element from the vector
    numbers.erase(numbers.begin() + 1);

    // Check if the vector is empty
    if (numbers.empty()) {
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector is not empty" << endl;
    }

    // Get the size of the vector
    cout << "Vector size: " << numbers.size() << endl;

    // Clear all elements from the vector
    numbers.clear();

    // Check if the vector is empty again
    if (numbers.empty()) {
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector is not empty" << endl;
    }

    return 0;
}