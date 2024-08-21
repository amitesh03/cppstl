#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> nums = {1, 2, 3};

    // Sorting the vector in ascending order
    sort(nums.begin(), nums.end());

    do {
        // Printing the current permutation
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
    } while (next_permutation(nums.begin(), nums.end()));

    return 0;
}