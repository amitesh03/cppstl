#include <iostream>
#include <queue>
using namespace std;
int main() {
    // Creating a priority queue of integers
    priority_queue<int> pq;

    // Inserting elements into the priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    // Accessing the top element of the priority queue
    cout << "Top element: " << pq.top() << endl;

    // Removing the top element from the priority queue
    pq.pop();

    // Checking if the priority queue is empty
    if (pq.empty()) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }

    // Getting the size of the priority queue
    cout << "Size of priority queue: " << pq.size() << endl;

    // Printing all the elements of the priority queue
    cout << "Elements of priority queue: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}