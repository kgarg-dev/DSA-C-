// Pattern17
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int d=65;
        char s=char(d);
        for (j=0;j<i+1;j++){
            cout<<s;
            d=d+1;
            s=char(d);
        }
        char ch='A'+i-1;
        for(j=0;j<i;j++){
            cout<<ch;
            ch=ch-1;
        }
        cout<<endl;    
    }
}