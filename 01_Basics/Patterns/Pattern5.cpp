// Pattern 5
// *****
// ****
// ***
// **
// *
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int i;
    int j;
    cin>>n;
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}