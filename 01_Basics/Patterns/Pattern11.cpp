// Pattern 11
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    cin>>n;
    int start=1;
    for(i=0;i<n+1;i++){
        if(i%2==0) start=1;
        else start=0;
        for(j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}