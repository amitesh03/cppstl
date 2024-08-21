#include<iostream>
#include<vector> 
using namespace std;    

int main(){
    vector<int> numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int target = 6;
    auto it = lower_bound(numbers.begin(), numbers.end(), target); 
    cout << "Element " << target << " found at index " << it - numbers.begin() << endl;
    return 0;
}