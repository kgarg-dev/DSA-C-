// Pattern 2
// *
// **
// ***
// ****
// *****
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int i;
    int j;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}