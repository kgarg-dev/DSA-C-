// Pattern 6
// 12345
// 1234
// 123
// 12
// 1
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int i;
    int j;
    cin>>n;
    for(i=n;i>0;i--){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}