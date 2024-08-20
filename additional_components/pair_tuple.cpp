#include <iostream>
#include <utility>
#include <tuple>
using namespace std;
int main() {
    // Example of using pair
    pair<int, string> myPair(42, "Hello");
    cout << "Pair: " << myPair.first << ", " << myPair.second << endl;

    // Example of using tuple
    tuple<int, float, string> myTuple(10, 3.14, "World");
    cout << "Tuple: " << get<0>(myTuple) << ", " << get<1>(myTuple) << ", " << get<2>(myTuple) << endl;

    return 0;
}