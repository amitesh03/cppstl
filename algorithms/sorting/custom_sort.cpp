#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Custom comparison function to sort in descending order
bool compareDescending(int a, int b) {
    return a > b; 
}

int main() {
    vector<int> numbers = {5, 2, 9, 1, 7};

    // Sort in descending order using the custom comparison function
    sort(numbers.begin(), numbers.end(), compareDescending); 

    // Print the sorted vector
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}