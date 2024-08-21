#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers = {5, 2, 8, 3, 1, 9, 4, 7, 6};

    // Find the minimum element
    auto minElement = min_element(numbers.begin(), numbers.end());
    cout << "Minimum element: " << *minElement << endl;

    // Find the maximum element
    auto maxElement = max_element(numbers.begin(), numbers.end());
    cout << "Maximum element: " << *maxElement << endl;

    return 0;
}