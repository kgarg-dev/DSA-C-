#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// 7. SET (std::set - Ordered & Unique)
// ============================================================================
// - Properties:
//   1. Sorted: Elements are stored in ascending order by default.
//   2. Unique: Duplicate values are automatically ignored.
// - Data Structure: Self-balancing Binary Search Tree (Red-Black Tree).
// - Performance: All major operations (insert, erase, find, count) take O(log N).
// - Note: push() and pop() are NOT supported. Use insert() / erase().
void explainSet() {
    set<int> st;

    // ------------------------------------------------------------------------
    // A. INSERTION & EMPLACE
    // ------------------------------------------------------------------------
    st.insert(5);    // Set state: {5}
    st.emplace(9);   // Set state: {5, 9}
    st.insert(5);    // Set state: {5, 9} -> Duplicate 5 is IGNORED!
    st.insert(1);    // Set state: {1, 5, 9} -> Auto-sorted in ascending order


    // ------------------------------------------------------------------------
    // B. SEARCHING (find & count)
    // ------------------------------------------------------------------------
    // find(x) returns an iterator pointing to x.
    // ! If x is NOT in the set, it returns st.end() (pointing past the end).
    auto it = st.find(5); // Iterator points to element 5

    auto not_found = st.find(100); 
    if (not_found == st.end()) {
        cout << "100 is NOT present in the set\n";
    }

    // count(x) returns 1 if present, 0 if not (since elements are unique)
    int cnt = st.count(1); // Output: 1


    // ------------------------------------------------------------------------
    // C. DELETION (ERASE)
    // ------------------------------------------------------------------------
    // 1. Erase by Value - O(log N)
    st.erase(5); // Removes 5 -> Set state: {1, 9}

    // 2. Erase by Iterator - O(1) amortized
    st.insert(3); // Set state: {1, 3, 9}
    auto it_del = st.find(3);
    if (it_del != st.end()) {
        st.erase(it_del); // Removes 3 -> Set state: {1, 9}
    }

    // 3. Erase Range [start, end)
    st.insert(2);
    st.insert(3);
    st.insert(4); // Set state: {1, 2, 3, 4, 9}

    auto it_start = st.find(2);
    auto it_end = st.find(4);
    st.erase(it_start, it_end); // Erases [2, 4) -> removes 2 and 3 -> Set: {1, 4, 9}


    // ------------------------------------------------------------------------
    // D. LOWER_BOUND & UPPER_BOUND
    // ------------------------------------------------------------------------
    // Set for demonstration: {10, 20, 30, 40, 50}
    set<int> s = {10, 20, 30, 40, 50};

    // lower_bound(x) -> Returns iterator to first element >= x
    auto lb1 = s.lower_bound(20); // Points to 20
    auto lb2 = s.lower_bound(25); // Points to 30 (first element >= 25)

    // upper_bound(x) -> Returns iterator to first element > x (STRICTLY greater)
    auto ub1 = s.upper_bound(30); // Points to 40 (first element > 30)

    cout << "Lower bound of 25: " << *lb2 << "\n"; // Output: 30
    cout << "Upper bound of 30: " << *ub1 << "\n"; // Output: 40


    // ------------------------------------------------------------------------
    // E. PRINTING A SET
    // ------------------------------------------------------------------------
    cout << "Set elements in order: ";
    for (auto val : s) {
        cout << val << " ";
    }
    cout << "\n";
}

int main() {
    cout << "=================== SET ===================\n";
    explainSet();
    return 0;
}