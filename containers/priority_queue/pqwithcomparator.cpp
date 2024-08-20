#include <iostream>
#include <queue>

struct CustomComparator {
    bool operator()(int a, int b) {
        // Custom comparison logic
        // Return true if 'a' should be placed before 'b' in the priority queue
        // Return false otherwise
        return a > b; // In this example, we use greater than operator for descending order
    }
};

int main() {
    std::priority_queue<int, std::vector<int>, CustomComparator> pq;

    // Insert elements into the priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(15);

    // Print the elements in the priority queue
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}