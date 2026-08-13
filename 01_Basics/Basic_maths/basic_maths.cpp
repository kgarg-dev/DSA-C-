/* 
==============================================
Basic Maths Notes 
Source : Striver A2Z DSA Series
Coding Language : C++
==============================================

NOTES:
1. Extraction of Digits from a Number:
   num = 1234
   num % 10 gives us 4 (last digit)
   num / 10 = 123 (removes last digit)
*/

/* Questions covered:
1. Counting of digits
2. Reversing of an integer
3. Palindrome number
4. Armstrong Number
5. Print Divisors
6. Check Prime
7. GCD / HCF [Euclidean algorithm]
*/

#include <bits/stdc++.h>
using namespace std;

// ==========================================
// 1. COUNTING OF DIGITS
// ==========================================
int countDigits(int n) {
    if (n == 0) {
        cout << "Total number of digits in the entered number is :" << endl;
        return 1;
    }
    int digits = 0;
    while (n > 0) {
        digits++;
        n = n / 10;
    }

    cout << "Total number of digits in the entered number is :" << endl;
    return digits;
}


// ==========================================
// 2. REVERSING AN INTEGER
// ==========================================
int reverse(int x) {
    int n;
    int s = 0;
    while (x != 0) {
        n = x % 10;
        x = x / 10;
        if (s > INT_MAX / 10 || (s == INT_MAX / 10 && n > 7))
            return 0;
        if (s < INT_MIN / 10 || (s == INT_MIN / 10 && n < -8)) 
            return 0;
        s = s * 10 + n;
    }
    return s;
}


// ==========================================
// 3. PALINDROME NUMBER
// ==========================================
bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    string s = to_string(x);
    int d = s.length(); 
    for (int i = 0; i < d / 2; i++) {
        if (s[i] != s[d - 1 - i]) { 
            return false; 
        }
    } 

    return true; // If no mismatch was found, it's a palindrome
}


// ==========================================
// 4. ARMSTRONG NUMBER
// ==========================================
bool isArmstrong(int n) {
    int d = 0;
    int s = 0;
    int a;
    int temp = n;

    while (n != 0) {
        n = n / 10;
        d++;
    }

    n = temp;
    while (n != 0) {
        a = n % 10;
        a = pow(a, d);
        s += a;
        n = n / 10;
    }

    n = temp;
    return s == n;
}


// ==========================================
// 5. PRINT DIVISORS
// ==========================================
vector<int> divisors(int n) {
    int i;
    vector<int> arr = {};

    // Loop up to sqrt(n) -> i * i <= n prevents duplicate additions
    for (i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            arr.emplace_back(i); 
            if ((n / i) != i) {
                arr.emplace_back(n / i);
            }
        }    
    }
    return arr;
}


// ==========================================
// 6. CHECK PRIME
// ==========================================
bool isPrime(int n) {
    int i;
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (i = 3; i <= int(pow(n, 0.5)); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


// ==========================================
// 7. GCD / HCF 
// ==========================================

// Method 1: Brute Force
int GCD(int n1, int n2) {
    int gcd = 1;
    int i;
    for (i = 1; i <= n1; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

// Method 2: Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {     // 1. Keep looping as long as we have a non-zero divisor
        int temp = b;    // 2. Temporarily save 'b' because 'a' will need its value
        b = a % b;       // 3. 'b' becomes the remainder of 'a' divided by 'b'
        a = temp;        // 4. 'a' takes on the previous value of 'b'
    }
    return a;            // 5. When 'b' becomes 0, 'a' holds the final GCD!
}


int main() {
    return 0;
}