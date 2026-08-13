#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// 8. MULTISET (std::multiset - Sorted & Allows Duplicates)
// ============================================================================
// - Properties:
//   1. Sorted: Stored in ascending order by default.
//   2. Duplicates: ALLOWED (unlike std::set).
// - Underlying Structure: Self-balancing Binary Search Tree (Red-Black Tree).
// - Performance: insert, erase, find take O(log N).
void explainMultiSet() {
    multiset<int> ms;

    // ------------------------------------------------------------------------
    // A. INSERTION & DUPLICATES
    // ------------------------------------------------------------------------
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    ms.insert(2); // {1, 1, 1, 2}
    ms.insert(3); // {1, 1, 1, 2, 3}


    // ------------------------------------------------------------------------
    // B. DELETION (Value vs Iterator - VERY IMPORTANT)
    // ------------------------------------------------------------------------

    // 1. Erase by Value -> Erases ALL occurrences of that value!
    // ms.erase(1); // Erases ALL 1's -> {2, 3}

    // 2. Erase by Iterator -> Erases ONLY A SINGLE occurrence (the first one)
    // ms.find(1) returns an iterator to the VERY FIRST instance of 1.
    ms.erase(ms.find(1)); // Removes only ONE '1' -> ms becomes {1, 1, 2, 3}


    // ------------------------------------------------------------------------
    // C. COUNTING OCCURRENCES
    // ------------------------------------------------------------------------
    // Unlike set (where count is 0 or 1), multiset count returns the exact frequency.
    int cnt = ms.count(1); 
    cout << "Count of 1s: " << cnt << "\n"; // Output: 2


    // ------------------------------------------------------------------------
    // D. ERASING A RANGE OF DUPLICATES
    // ------------------------------------------------------------------------
    // ! WARNING: Writing `ms.find(1) + 2` causes a COMPILER ERROR because set/multiset
    // ! iterators are Bidirectional, NOT Random-Access (like vector/deque).
    // ? FIX: Use std::next(iterator, count) to move forward by 'count' steps.

    auto start_it = ms.find(1);             // Points to 1st '1'
    auto end_it = next(ms.find(1), 2);      // Points 2 positions ahead

    ms.erase(start_it, end_it);             // Erases two 1's -> ms becomes {2, 3}


    // ------------------------------------------------------------------------
    // E. PRINTING A MULTISET
    // ------------------------------------------------------------------------
    cout << "Remaining elements: ";
    for (auto val : ms) {
        cout << val << " ";
    }
    cout << "\n";
}

int main() {
    cout << "=================== MULTISET ===================\n";
    explainMultiSet();
    return 0;
}