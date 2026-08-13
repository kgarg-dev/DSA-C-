// Pattern 13
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    int s=1;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<s<<" ";
            s=s+1;
        }
        cout<<endl;
    }
}