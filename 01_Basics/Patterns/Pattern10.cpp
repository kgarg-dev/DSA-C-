// Pattern 10
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    cin>>n;
    for (i=0;i<n+1;i++){
        for (j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n-1;i>0;i--){
        for(j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
