#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// 1. VECTOR (Dynamic Array)
// ============================================================================
// - Memory: Contiguous (elements stored side-by-side in memory).
// - Random Access: Fast O(1) access using [] or .at().
// - Performance: Fast insertion/deletion at end O(1); slow at front O(N).
void explainVector() {
    // ------------------------------------------------------------------------
    // A. INITIALIZATION & INSERTION
    // ------------------------------------------------------------------------
    vector<int> v; 
    v.push_back(1);    // {1}
    v.emplace_back(2); // {1, 2} -> Constructs element in-place (faster)

    // Vector of Pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});  // Requires explicit pair syntax: {}
    vec.emplace_back(1, 2); // Auto-constructs pair(1, 2)

    // Sized Initialization & Copying
    vector<int> vs(5, 100); // {100, 100, 100, 100, 100}
    vector<int> v1(vs);     // Copy constructor: v1 becomes a copy of vs


    // ------------------------------------------------------------------------
    // B. FORWARD ITERATORS
    // ------------------------------------------------------------------------
    // v.begin() points to the memory address of FIRST element
    vector<int>::iterator it = v.begin(); 
    it++; 
    cout << *it << " "; // Output: 2

    // v.end() points to the memory address JUST AFTER the last element
    it = v.end(); 
    it--; 
    cout << *it << "\n"; // Output: 2


    // ------------------------------------------------------------------------
    // C. REVERSE ITERATORS
    // ------------------------------------------------------------------------
    // v.rbegin() points to the LAST element (moves backward on it++)
    vector<int>::reverse_iterator rit = v.rbegin();
    cout << *rit << " "; // Output: 2

    // v.rend() points JUST BEFORE the first element
    auto rend_it = v.rend(); // 'auto' resolves to vector<int>::reverse_iterator
    rend_it--;
    cout << *rend_it << "\n"; // Output: 1


    // ------------------------------------------------------------------------
    // D. PRINTING VECTORS
    // ------------------------------------------------------------------------
    cout << "Printing via Iterators: ";
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i << " ";
    }
    cout << "\n"; 

    cout << "Printing via Range-Based Loop (Best Practice): ";
    for (auto element : v) {
        cout << element << " ";
    }
    cout << "\n";


    // ------------------------------------------------------------------------
    // E. DELETION (ERASE)
    // ------------------------------------------------------------------------
    vector<int> del_v = {10, 20, 30, 40, 50}; 

    // Single element erase: erase(iterator)
    del_v.erase(del_v.begin()); // {20, 30, 40, 50}
    
    // Range erase: erase(start_iterator, end_iterator) -> Half-open interval [start, end)
    del_v.erase(del_v.begin() + 1, del_v.begin() + 3); // Removes 30 and 40 -> {20, 50}


    // ------------------------------------------------------------------------
    // F. INSERT, SIZE, SWAP, CLEAR & EMPTY
    // ------------------------------------------------------------------------
    vector<int> v2(4, 22); // {22, 22, 22, 22}

    // Single insert: insert(position, value)
    v2.insert(v2.begin(), 300); // {300, 22, 22, 22, 22}

    // Range/Count insert: insert(position, count, value)
    v2.insert(v2.begin() + 1, 2, 100); // {300, 100, 100, 22, 22, 22, 22}
    
    cout << "Size of v2: " << v2.size() << "\n"; // Output: 7

    v2.pop_back(); // Removes last element
    cout << "Size after pop_back: " << v2.size() << "\n"; // Output: 6

    // Swap contents between two vectors
    vector<int> v3(3, 29); // {29, 29, 29}
    v2.swap(v3); 
    // v2 is now {29, 29, 29}, v3 is now {300, 100, 100, 22, 22, 22}

    v3.clear(); // Clears all elements from v3

    cout << "Is v3 empty? " << v3.empty() << "\n"; // Output: 1 (true)
    cout << "Is v2 empty? " << v2.empty() << "\n"; // Output: 0 (false)
}


int main() {
    cout << "=================== VECTOR ===================\n";
    explainVector();
}