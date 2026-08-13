// Pattern18
// E 
// D E 
// C D E
// B C D E 
// A B C D E
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    int d;
    char s;
    cin>>n;
    for(i=0;i<n;i++){
        d=64+n-i;
        s=char(d);
        for(j=0;j<=i;j++){
            cout<<s;
            d=d+1;
            s=char(d);
        }
        cout<<endl;
    }
}