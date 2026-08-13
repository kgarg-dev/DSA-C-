// #Pattern15
// ABCDE
// ABCD
// ABC
// AB
// A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int n;
    cin>>n;
    for(i=n;i>0;i--){
        int d=65;
        char s=char(d);
        for(j=i;j>0;j--){
            cout<<s;
            d=d+1;
            s=char(d);
        }
        cout<<endl;
    }
}

