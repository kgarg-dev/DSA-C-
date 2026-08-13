#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// 6. PRIORITY QUEUE (Max-Heap & Min-Heap)
// ============================================================================
// - Principle: Elements are arranged based on priority (value).
// - Default Behavior: Max-Heap (largest element stays on top).
// - Memory/Access: NO indexing (pq[0] fails) and NO iterators. Only top() is accessible.
// - Performance: push() & pop() take O(log N); top(), size(), & empty() take O(1).
void explainPriorityQueue() {

    // ------------------------------------------------------------------------
    // A. MAX-HEAP (Default: Highest value at the top)
    // ------------------------------------------------------------------------
    priority_queue<int> pq;

    pq.push(5);    // Heap state (Top -> Bottom): {5}
    pq.push(3);    // {5, 3}
    pq.emplace(9); // {9, 5, 3} -> 9 automatically moves to top!

    cout << "Max-Heap Top: " << pq.top() << "\n"; // Output: 9

    pq.pop(); // Removes 9 -> Heap state: {5, 3}

    cout << "Max-Heap Top after pop: " << pq.top() << "\n"; // Output: 5


    // ------------------------------------------------------------------------
    // B. MIN-HEAP (Lowest value at the top)
    // ------------------------------------------------------------------------
    // Syntax: priority_queue<Type, Container, Comparator>
    priority_queue<int, vector<int>, greater<int>> min_pq;

    min_pq.push(4);    // Heap state (Top -> Bottom): {4}
    min_pq.push(7);    // {4, 7}
    min_pq.emplace(1); // {1, 4, 7} -> 1 automatically moves to top!

    cout << "Min-Heap Top: " << min_pq.top() << "\n"; // Output: 1


    // ------------------------------------------------------------------------
    // C. COMMON OPERATIONS (size, empty, swap)
    // ------------------------------------------------------------------------
    cout << "Size of Min-Heap: " << min_pq.size() << "\n";     // Output: 3
    cout << "Is Min-Heap empty? " << min_pq.empty() << "\n"; // Output: 0 (false)

    priority_queue<int> pq1, pq2;
    pq1.push(10);
    pq1.push(20);

    pq1.swap(pq2); // Swaps contents -> pq2 gets {20, 10}, pq1 becomes empty {}


 
}

int main() {
    cout << "=================== PRIORITY QUEUE ===================\n";
    explainPriorityQueue();
    return 0;
}