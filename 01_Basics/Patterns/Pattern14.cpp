// Pattern 14
// A
// AB
// ABC
// ABCD
// ABCDE
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    cin>>n;
    for (i=0;i<n;i++){
        int d=65;
        char s=char(d);
        for(j=0;j<=i;j++){
            cout<<s;
            d=d+1;
            s=char(d);
        }
        cout<<endl;
    }
}