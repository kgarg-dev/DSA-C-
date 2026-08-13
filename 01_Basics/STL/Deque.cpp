#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// 3. DEQUE (Double-Ended Queue)
// ============================================================================
// - Memory: Chunked continuous blocks (indexed blocks of fixed size).
// - Random Access: Supported O(1) (dq[0] WORKS!).
// - Performance: O(1) push/pop at BOTH front and back.
void explainDeque() {
    deque<int> dq;

    // Insertion
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1, 2}
    dq.push_front(8);    // {8, 1, 2}
    dq.emplace_front(9); // {9, 8, 1, 2}

    // Direct element access (Not allowed in list, but allowed in deque/vector)
    cout << "First element (dq[0]): " << dq[0] << "\n"; // Output: 9
    cout << "Front element: " << dq.front() << "\n";     // Output: 9
    cout << "Back element: " << dq.back() << "\n";       // Output: 2

    // Deletion
    dq.pop_back();  // Removes 2 -> {9, 8, 1}
    dq.pop_front(); // Removes 9 -> {8, 1}

    cout << "Remaining Deque elements: ";
    for (auto it : dq) {
        cout << it << " ";
    }
    cout << "\n";

    // Note: Rest of functions (begin, end, rbegin, rend, clear, insert, swap) are identical to vector.
}
int main(){
    cout << "=================== DEQUE ===================\n";
    explainDeque();
    return 0;
}
