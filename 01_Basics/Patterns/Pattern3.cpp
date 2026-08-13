// Pattern 3
// 1
// 12
// 123
// 1234
// 12345
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int i;
    int j;
    cin>>n;
    for(i=1;i<n+1;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}