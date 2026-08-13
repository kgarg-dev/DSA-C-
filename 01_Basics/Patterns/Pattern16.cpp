// Pattern16
// A
// BB
// CCC
// DDDD
// EEEEE
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    cin>>n;
    int d=64;
    for(i=0;i<n;i++){
        d=d+1;
        char s=char(d);
        for(j=0;j<=i;j++){
            cout<<s;

        }
        cout<<endl;
    }
}

