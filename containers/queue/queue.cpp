#include <iostream>
#include <queue>
using namespace std;
int main() {
    // Create a queue of integers
    queue<int> myQueue;

    // Push elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Get the size of the queue
    cout<< "Size of the queue: " << myQueue.size() << endl;

    // Check if the queue is empty
    if (myQueue.empty()) {
        cout<< "The queue is empty." << endl;
    } else {
        cout<< "The queue is not empty." << endl;
    }

    // Access the front and back elements of the queue
    cout<< "Front element of the queue: " << myQueue.front() << endl;
    cout<<"Back element of the queue: " << myQueue.back() << endl;

    // Pop elements from the queue
    myQueue.pop();

    // Print the elements of the queue
    cout<<"Elements of the queue: ";
    while (!myQueue.empty()) {
        cout<<myQueue.front() << " ";
        myQueue.pop();
    }
    cout<<endl;

    return 0;
}