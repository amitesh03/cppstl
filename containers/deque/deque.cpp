#include <iostream>
#include <deque>
using namespace std;
int main() {
    // Create a deque
    deque<int> myDeque;

    // Insert elements at the back
    myDeque.push_back(10);
    myDeque.push_back(20);
    myDeque.push_back(30);

    // Insert elements at the front
    myDeque.push_front(5);
    myDeque.push_front(15);

    // Access elements
    cout << "Front element: " << myDeque.front() << endl;
    cout << "Back element: " << myDeque.back() << endl;

    // Iterate over the deque
    cout << "Elements in the deque: ";
    for (auto it = myDeque.begin(); it != myDeque.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Remove elements from the front
    myDeque.pop_front();

    // Remove elements from the back
    myDeque.pop_back();

    // Check if the deque is empty
    if (myDeque.empty()) {
        cout << "Deque is empty" << endl;
    } else {
        cout << "Deque is not empty" << endl;
    }

    // Clear the deque
    myDeque.clear();

    return 0;
}