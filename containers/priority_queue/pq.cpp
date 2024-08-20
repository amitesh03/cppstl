#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Create a priority queue of pairs with integer priority/weight
    priority_queue<pair<int, int>> pq;

    // Insert elements into the priority queue
    pq.push({10, 1});
    pq.push({20, 2});
    pq.push({30, 3});

    // Print the top element of the priority queue
    cout << "Top element: " << pq.top().first << " with priority: " << pq.top().second << endl;

    // Pop the top element from the priority queue
    pq.pop();

    // Print the top element again
    cout << "Top element after pop: " << pq.top().first << " with priority: " << pq.top().second << endl;

    // Check if the priority queue is empty
    if (pq.empty()) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }

    // Get the size of the priority queue
    cout << "Size of priority queue: " << pq.size() << endl;

    return 0;
}