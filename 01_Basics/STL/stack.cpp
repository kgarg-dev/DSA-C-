#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// 4. STACK (Container Adaptor - LIFO)
// ============================================================================
// - Principle: LIFO (Last In, First Out) -> The last added element is removed first.
// - Memory/Access: NO indexing (s[0] fails) and NO iterators (begin()/end() fail).
// - Performance: All core operations (push, pop, top, size, empty) run in O(1) time.
void explainStack() {
    stack<int> st;

    // ------------------------------------------------------------------------
    // A. PUSH & EMPLACE (Adding Elements)
    // ------------------------------------------------------------------------
    // Elements are placed on top of each other (like a stack of plates)
    st.push(5);    // Stack State (Bottom -> Top): {5}
    st.push(9);    // {5, 9}
    st.push(3);    // {5, 9, 3}
    st.emplace(8); // {5, 9, 3, 8} -> In-place construction at top


    // ------------------------------------------------------------------------
    // B. ACCESSING TOP & SIZE
    // ------------------------------------------------------------------------
    cout << "Top element: " << st.top() << "\n"; // Output: 8
    cout << "Stack size: " << st.size() << "\n";  // Output: 4
    
    // empty() returns 1 (true) if empty, 0 (false) if not
    cout << "Is stack empty? " << st.empty() << "\n"; // Output: 0 (false)


    // ------------------------------------------------------------------------
    // C. POP (Removing Elements)
    // ------------------------------------------------------------------------
    // ! Note: pop() removes the top element but returns 'void' (does NOT return the value).
    st.pop(); // Removes 8 -> Stack state: {5, 9, 3}
    cout << "New top after pop: " << st.top() << "\n"; // Output: 3


    // ------------------------------------------------------------------------
    // D. SWAPPING STACKS
    // ------------------------------------------------------------------------
    stack<int> st1, st2;
    st1.push(100);
    st1.push(200);

    st1.swap(st2); // Swaps contents -> st2 gets {100, 200}, st1 becomes empty {}

    cout << "st2 top after swap: " << st2.top() << "\n"; // Output: 200


    // ------------------------------------------------------------------------
    // E. PRINTING A STACK (Copying & Popping)
    // ------------------------------------------------------------------------
    // ? Since stacks do not support range-loops or iterators, 
    // ? you must copy the stack and pop elements to print them.
    stack<int> temp = st; // Copy original stack {5, 9, 3}
    
    cout << "Elements in stack (Top to Bottom): ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop(); // Removes top after printing
    }
    cout << "\n";
}

int main() {
    cout << "=================== STACK ===================\n";
    explainStack();
    return 0;
}