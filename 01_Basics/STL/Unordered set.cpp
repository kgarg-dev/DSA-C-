#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// 9. UNORDERED SET (std::unordered_set - Unique & Unordered)
// ============================================================================
// - Properties:
//   1. Unique: Duplicate values are automatically ignored.
//   2. Unordered: Elements are NOT stored in any specific order.
// - Data Structure: Hash Table.
// - Time Complexity:
//   - Average / Best Case: O(1) for insert, find, and erase.
//   - Worst Case: O(N) (extremely rare, occurs due to hash collisions).
// - Note: lower_bound() and upper_bound() DO NOT WORK here because data is unsorted.
void explainUnorderedSet() {

    // ------------------------------------------------------------------------
    // A. INITIALIZATION SYNTAX & INSERTION
    // ------------------------------------------------------------------------
    unordered_set<int> st;

    st.insert(5);    // {5}
    st.emplace(9);   // {5, 9} (Order is randomized/unpredictable)
    st.insert(1);    // {5, 9, 1}
    st.insert(5);    // Duplicate 5 is ignored!


    // ------------------------------------------------------------------------
    // B. COMMON OPERATIONS (Same functions as std::set)
    // ------------------------------------------------------------------------
    // Search - O(1) average time
    auto it = st.find(9);
    if (it != st.end()) {
        cout << "Element 9 found in unordered_set\n";
    }

    // Count - returns 1 if present, 0 if not
    int cnt = st.count(5); // Output: 1

    // Deletion - O(1) average time
    st.erase(1); // Removes 1 by value


    // ------------------------------------------------------------------------
    // C. WHAT DOES NOT WORK HERE
    // ------------------------------------------------------------------------
    // ! st.lower_bound(2); // COMPILER ERROR! (Only works on sorted containers)
    // ! st.upper_bound(2); // COMPILER ERROR! (Only works on sorted containers)


    // ------------------------------------------------------------------------
    // D. PRINTING
    // ------------------------------------------------------------------------
    cout << "Elements (in arbitrary hash table order): ";
    for (auto val : st) {
        cout << val << " ";
    }
    cout << "\n";
}

int main() {
    cout << "=================== UNORDERED SET ===================\n";
    explainUnorderedSet();
    return 0;
}