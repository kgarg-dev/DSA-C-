#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// CUSTOM COMPARATOR FUNCTION
// ============================================================================
// Striver's classic example:
// Sort pairs by 2nd element in ascending order.
// If 2nd elements are equal, sort 1st element in descending order.
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;   // 2nd element smaller -> correct order
    if (p1.second > p2.second) return false;  // 2nd element larger  -> swap
    
    // If 2nd elements are equal, compare 1st elements (descending order)
    if (p1.first > p2.first) return true;
    return false;
}


// ============================================================================
// 11. C++ STL ALGORITHMS (<algorithm> & <numeric>)
// ============================================================================
void explainAlgorithms() {

    // ------------------------------------------------------------------------
    // A. SORTING (std::sort)
    // ------------------------------------------------------------------------
    // 1. Array Sorting - Time Complexity: O(N log N)
    int a[] = {4, 1, 3, 2, 5};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n); // Array becomes: {1, 2, 3, 4, 5}

    // 2. Vector Sorting
    vector<int> v = {4, 2, 1, 5, 3};
    sort(v.begin(), v.end()); // Vector becomes: {1, 2, 3, 4, 5}

    // 3. Sub-range Sorting [start, end)
    // Sorts elements from index 1 to 3
    vector<int> v2 = {5, 4, 3, 2, 1};
    sort(v2.begin() + 1, v2.begin() + 4); // Vector becomes: {5, 2, 3, 4, 1}

    // 4. Descending Order Sorting
    sort(v.begin(), v.end(), greater<int>()); // Vector becomes: {5, 4, 3, 2, 1}

    // 5. Custom Comparator Sorting
    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    int size_arr = 3;
    sort(arr, arr + size_arr, comp);
    // Result: {{4, 1}, {2, 1}, {1, 2}}
    // Explanation: {4,1} comes before {2,1} because 2nd elements are equal (1==1) 
    // and 4 > 2 (1st element descending).


    // ------------------------------------------------------------------------
    // B. BUILT-IN BIT OPERATIONS (__builtin_popcount)
    // ------------------------------------------------------------------------
    // Counts the number of set bits (1s) in binary representation in O(1) time.
    int num = 7; // Binary of 7 = '111' -> 3 set bits
    int set_bits = __builtin_popcount(num); 
    cout << "Set bits in 7: " << set_bits << "\n"; // Output: 3

    // ! Use __builtin_popcountll for 64-bit integers (long long)
    long long long_num = 165786578687LL;
    int set_bits_ll = __builtin_popcountll(long_num);


    // ------------------------------------------------------------------------
    // C. PERMUTATIONS (next_permutation)
    // ------------------------------------------------------------------------
    // Rearranges range into the lexicographically next greater permutation.
    // ! IMPORTANT: To generate ALL permutations, the container MUST be sorted first!
    string s = "231";
    sort(s.begin(), s.end()); // s becomes "123"

    cout << "All permutations of 123:\n";
    do {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));
    // Output: 123, 132, 213, 231, 312, 321 , in increasing order


    // ------------------------------------------------------------------------
    // D. MIN & MAX ELEMENTS
    // ------------------------------------------------------------------------
    // max_element / min_element return ITERATORS (or pointers for raw arrays).
    // Use '*' to dereference and get the actual value.
    auto max_it = max_element(v.begin(), v.end());
    auto min_it = min_element(v.begin(), v.end());

    cout << "Max element in v: " << *max_it << "\n"; // Output: 5
    cout << "Min element in v: " << *min_it << "\n"; // Output: 1


    // ------------------------------------------------------------------------
    // E. BINARY SEARCH (std::binary_search)
    // ------------------------------------------------------------------------
    // Returns boolean (true/false) whether element exists.
    // ! Requires container to be sorted in ascending order first! O(log N) time.
    sort(v.begin(), v.end()); // {1, 2, 3, 4, 5}
    bool exists = binary_search(v.begin(), v.end(), 3);
    cout << "Does 3 exist in v? " << (exists ? "Yes" : "No") << "\n";
}

int main() {
    cout << "=================== STL ALGORITHMS ===================\n";
    explainAlgorithms();
    return 0;
}