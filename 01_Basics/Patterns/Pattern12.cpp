// Pattern 12
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    cin>>n;
    for(i=0;i<n;i++){
        int s=1;
        int a=1;
        for(j=0;j<=i;j++){
            cout<<s;
            s=s+1;
        }
            
        
        for(j=0;j<2*(n)-(2*i)-2;j++){
                cout<<" ";
        }
        a=i+1;
        for(j=0;j<=i;j++){
            cout<<a;
            a=a-1;
        }
        
        cout<<endl;
    }
}