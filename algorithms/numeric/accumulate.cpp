#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Using accumulate to calculate the sum of all elements in the vector
    int sum = accumulate(numbers.begin(), numbers.end(), 0);

    cout << "Sum: " << sum << endl;

    return 0;
}