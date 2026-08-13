// Pattern 19
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    cin>>n;
    for(i=n;i>0;i--){
        for(j=0;j<i;j++){
            cout<<"*";
        }
        for(j=0;j<2*n-2*i;j++){
            cout<<" ";
        }
        for(j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
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
}