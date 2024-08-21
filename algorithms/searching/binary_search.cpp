#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;

    // Sorting the vector is necessary for binary_search to work correctly
    sort(numbers.begin(), numbers.end());

    if (binary_search(numbers.begin(), numbers.end(), target)) {
        cout << "Element " << target << " found in the vector." << endl;
    } else {
        cout << "Element " << target << " not found in the vector." << endl;
    }

    return 0;
}