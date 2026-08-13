#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// 5. QUEUE (Container Adaptor - FIFO)
// ============================================================================
// - Principle: FIFO (First In, First Out) -> Like a line at a ticket counter.
// - Memory/Access: NO indexing (q[0] fails) and NO iterators (begin/end fail).
// - Performance: All core operations (push, pop, front, back, size, empty) run in O(1).
void explainQueue() {
    queue<int> q;

    // ------------------------------------------------------------------------
    // A. PUSH & EMPLACE (Adding Elements to the Back)
    // ------------------------------------------------------------------------
    q.push(1);    // Queue state (Front -> Back): {1}
    q.push(2);    // {1, 2}
    q.emplace(4); // {1, 2, 4} -> Constructs in-place at the back


    // ------------------------------------------------------------------------
    // B. ACCESS & MODIFY (front and back)
    // ------------------------------------------------------------------------
    // q.back() returns a reference to the LAST (newest) inserted element.
    // Because it returns a reference, you can modify it directly in-place!
    q.back() += 5; // Modifies 4 to (4 + 5 = 9) -> Queue state: {1, 2, 9}

    cout << "Back element: " << q.back() << "\n";   // Output: 9
    cout << "Front element: " << q.front() << "\n"; // Output: 1


    // ------------------------------------------------------------------------
    // C. POP (Removing Element from the Front)
    // ------------------------------------------------------------------------
    // ! Note: pop() removes the FRONT (oldest) element and returns 'void'.
    q.pop(); // Removes 1 -> Queue state: {2, 9}

    cout << "New front after pop: " << q.front() << "\n"; // Output: 2


    // ------------------------------------------------------------------------
    // D. SIZE, EMPTY & SWAP
    // ------------------------------------------------------------------------
    cout << "Size of queue: " << q.size() << "\n";     // Output: 2
    cout << "Is queue empty? " << q.empty() << "\n"; // Output: 0 (false)

    queue<int> q1, q2;
    q1.push(10);
    q1.push(20);

    q1.swap(q2); // Swaps contents -> q2 becomes {10, 20}, q1 becomes {}


    // ------------------------------------------------------------------------
    // E. PRINTING A QUEUE (Copying & Popping)
    // ------------------------------------------------------------------------
    // ? Since queues do not support range-loops or iterators,
    // ? you must copy the queue and pop elements from the front to print them.
    queue<int> temp = q; // Copy remaining queue {2, 9}

    cout << "Elements in queue (Front to Back): ";
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop(); // Removes front after printing
    }
    cout << "\n";
}

int main() {
    cout << "=================== QUEUE ===================\n";
    explainQueue();
    return 0;
}