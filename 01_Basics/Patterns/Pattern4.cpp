// Pattern 4
// 1
// 22
// 333
// 4444
// 55555
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int i;
    int j;
    cin>>n;
    for(i=1;i<n+1;i++){
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}