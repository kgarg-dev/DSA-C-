// Pattern 20
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        for(j=0;j<2*n-2*i-2;j++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<"*";
        }        
        cout<<endl;
    }
    for(i=n;i>1;i--){
        for(j=1;j<i;j++){
            cout<<"*";
        }
        for(j=0;j<2*n-2*i+2;j++){
            cout<<" ";
        }
        for(j=1;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}