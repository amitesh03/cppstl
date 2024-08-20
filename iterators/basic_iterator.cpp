#include <iostream>
#include <list>
#include <queue>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
using namespace std;

int main() {
    // Example with list
    list<int> numbers = {1, 2, 3, 4, 5};
    list<int>::iterator listIt;
    for (listIt = numbers.begin(); listIt != numbers.end(); ++listIt) {
        cout << *listIt << " ";
    }
    cout << endl;

    // Example with priority_queue
    priority_queue<int> pq;
    pq.push(3);
    pq.push(1);
    pq.push(4);
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // Example with vector
    vector<string> names = {"Alice", "Bob", "Charlie"};
    vector<string>::iterator vecIt;
    for (vecIt = names.begin(); vecIt != names.end(); ++vecIt) {
        cout << *vecIt << " ";
    }
    cout << endl;

    // Example with set
    set<int> uniqueNumbers = {1, 2, 3, 4, 5};
    set<int>::iterator setIt;
    for (setIt = uniqueNumbers.begin(); setIt != uniqueNumbers.end(); ++setIt) {
        cout << *setIt << " ";
    }
    cout << endl;

    // Example with map
    map<string, int> ages = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};
    map<string, int>::iterator mapIt;
    for (mapIt = ages.begin(); mapIt != ages.end(); ++mapIt) {
        cout << mapIt->first << ": " << mapIt->second << endl;
    }

    // Example with stack
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    // Example with queue
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Example with deque
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    deque<int>::iterator dequeIt;
    for (dequeIt = dq.begin(); dequeIt != dq.end(); ++dequeIt) {
        cout << *dequeIt << " ";
    }
    cout << endl;

    return 0;
}