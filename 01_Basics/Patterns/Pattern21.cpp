// Problem 21
// *****
// *   *
// *   *
// *   *
// *****
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(i=0;i<n-2;i++){
        for(j=0;j<1;j++){
            cout<<"*";
        }
        for(j=0;j<n-2;j++){
            cout<<" ";
        }
        for(j=0;j<1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        cout<<"*";
    }
}