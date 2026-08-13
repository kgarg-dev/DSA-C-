#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// 10. MAP (std::map - Sorted Keys & Unique Keys)
// ============================================================================
void explainMap() {

    // ------------------------------------------------------------------------
    // A. DECLARATION & INSERTION
    // ------------------------------------------------------------------------
    map<int, int> mpp;

    mpp[1] = 2;         // {1, 2}
    mpp.emplace(3, 1);  // {1, 2}, {3, 1}
    mpp.insert({2, 4}); // {1, 2}, {2, 4}, {3, 1}


    // ------------------------------------------------------------------------
    // B. SEARCHING & ITERATOR DEREFERENCING (Two Methods)
    // ------------------------------------------------------------------------
    // find(key) returns an iterator pointing to the {key, value} pair.
    
    auto it = mpp.find(3); // Points to pair {3, 1}

    // Method 1: Using Arrow Operator -> (Recommended)
    cout << "Key: " << it->first << ", Value: " << it->second << "\n"; 

    // Method 2: Dereferencing with Parentheses (*it)
    // ! MUST wrap *it in parentheses: (*it).second
    cout << "Value via (*it).second: " << (*it).second << "\n";


    // ------------------------------------------------------------------------
    // C. HANDLING MISSING KEYS WITH FIND
    // ------------------------------------------------------------------------
    auto it2 = mpp.find(5);

    // Always check against mpp.end() before dereferencing!
    if (it2 == mpp.end()) {
        cout << "Key 5 does NOT exist in map!\n";
    } else {
        cout << "Value at key 5: " << it2->second << "\n";
    }


    // ------------------------------------------------------------------------
    // D. ITERATING OVER THE ENTIRE MAP
    // ------------------------------------------------------------------------
    cout << "All elements:\n";
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << "\n";
    }
}

int main() {
    cout << "=================== MAP ===================\n";
    explainMap();
    return 0;
}

// ============================================================================
//                                 MULTIMAP
// ============================================================================

//**** Only key difference is that it can store duplicate keys.******
