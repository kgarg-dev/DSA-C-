/* 
==============================================
Basic Recursion Notes 
Source : Striver A2Z DSA Series
Coding Language : C++
==============================================

NOTES:
1. Recursion: A function calling itself until a base condition is met.
2. Base Case: The condition that stops recursion to prevent Stack Overflow (infinite calls).
3. Head vs Tail Recursion:
   - Head Recursion: Recursive call happens before the work (e.g., printing after call -> 1 to N).
   - Tail Recursion: Work happens before recursive call (e.g., printing before call -> N to 1).
4. Time & Space Complexity:
   - Most linear recursive solutions take O(N) Time and O(N) Auxiliary Space (Call Stack).
*/

/* Questions covered:
1. Print 1 to N
2. Print N to 1
3. Sum of First N Numbers
4. Factorial of N
5. Reverse an Array
6. Check Valid Palindrome
7. Fibonacci Number
*/

#include <bits/stdc++.h>
using namespace std;

// ==========================================
// 1. PRINT 1 TO N (Head Recursion / Backtracking)
// ==========================================
void print1ToN(int n) {
    // Base Case
    if (n == 0) {
        return;
    }

    // Recursive Call: Head recursion goes deep first
    print1ToN(n - 1);

    // Operation executes during return phase (backtracking)
    cout << n << "\n";
}


// ==========================================
// 2. PRINT N TO 1 (Tail Recursion)
// ==========================================
void printNTo1(int n) {
    // Base Case
    if (n == 0) {
        return;
    }

    // Operation executes before moving deeper
    cout << n << "\n";

    // Recursive Call
    printNTo1(n - 1);
}


// ==========================================
// 3. SUM OF FIRST N NUMBERS
// ==========================================
int NnumbersSum(int N) {
    // Base Case: Sum up to 0 is 0
    if (N == 0) {
        return 0;
    }

    // Functional Recursion: Add current N to answer of (N - 1)
    return N + NnumbersSum(N - 1);
}


// ==========================================
// 4. FACTORIAL OF N
// ==========================================
int factorial(int n) {
    // Base Case: Factorial of 0 is 1
    if (n == 0) {
        return 1;
    }

    // Functional Recursion: Multiply N by factorial of (N - 1)
    return n * factorial(n - 1);
}


// ==========================================
// 5. REVERSE AN ARRAY
// ==========================================

// Helper function using 2-pointers (i and j)
void reverseHelper(int arr[], int i, int j) {
    // Base Case: Pointers cross or meet
    if (i >= j) {
        return;
    }

    // Swap outer elements
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    // Move pointers towards the middle
    reverseHelper(arr, i + 1, j - 1);
}

void reverseArray(int arr[], int n) {
    reverseHelper(arr, 0, n - 1);
}


// ==========================================
// 6. CHECK VALID PALINDROME
// ==========================================
bool isPalindrome(string s) {
    vector<char> arr;

    // Filter out non-alphanumeric characters and convert to lowercase
    for (char c : s) {
        if (isalnum(c)) {
            arr.push_back(tolower(c));
        }
    }

    if (arr.empty()) {
        return true;
    }

    int n = arr.size();
    int d = 0;

    // Check two-pointer symmetry
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - 1 - i]) {
            d++;
        }
    }

    return d == (n / 2);
}


// ==========================================
// 7. FIBONACCI NUMBER (Multiple Recursion Calls)
// ==========================================
int fib(int n) {
    // Base Cases: fib(0) = 0, fib(1) = 1
    if (n == 0) return 0;
    if (n == 1) return 1;

    // Multiple Recursive Calls (Tree Recursion)
    return fib(n - 1) + fib(n - 2);
}


int main() {
    return 0;
}