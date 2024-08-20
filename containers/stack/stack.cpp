#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Check if the stack is empty
    if (myStack.empty()) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack is not empty!" << endl;
    }

    // Get the size of the stack
    cout << "Size of stack: " << myStack.size() << endl;

    // Access the top element of the stack
    cout << "Top element: " << myStack.top() << endl;

    // Pop elements from the stack
    myStack.pop();
    myStack.pop();

    // Check if the stack is empty again
    if (myStack.empty()) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack is not empty!" << endl;
    }

    return 0;
}