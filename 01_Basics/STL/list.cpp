#include <bits/stdc++.h>
using namespace std;
// ============================================================================
// 2. LIST (Doubly Linked List)
// ============================================================================
// - Memory: Non-contiguous (nodes linked via pointers).
// - Random Access: NOT supported (ls[0] or ls.at(0) will throw compilation error).
// - Performance: O(1) insertion/deletion at BOTH front and back.
void explainList() {
    list<int>ls;

    // Insertion
    ls.push_back(5);      // {5}
    ls.emplace_back(7);   // {5, 7}
    
    // push_front / emplace_front is O(1) in List (unlike vector where it is O(N))
    ls.push_front(9);     // {9, 5, 7}
    ls.emplace_front(11); // {11, 9, 5, 7}

    cout << "List elements: ";
    for (auto val : ls) {
        cout << val << " ";
    }
    cout << "\n";

    // Deletion
    ls.pop_front(); // Removes 11 -> {9, 5, 7}
    ls.pop_back();  // Removes 7  -> {9, 5}

    // Note: Iterators (begin, end, rbegin, rend), clear(), insert(), size(), 
    // and swap() work identically to std::vector.
}
int main(){
    cout << "\n=================== LIST ====================\n";
    explainList();   
}