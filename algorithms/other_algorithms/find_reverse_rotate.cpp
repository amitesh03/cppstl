#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // Create a vector of integers
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Reverse the order of the elements in the vector
    reverse(numbers.begin(), numbers.end());

    // Print the reversed vector
    cout << "Reversed vector: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Rotate the elements in the vector
    rotate(numbers.begin(), numbers.begin() + 2, numbers.end());

    // Print the rotated vector
    cout << "Rotated vector: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}