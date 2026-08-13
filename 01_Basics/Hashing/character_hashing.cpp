#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    
    //precomputing
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    cout<<"enter the queries:";
    int q;
    cin>>q;
    while(q--){
        cout<<"enter queries value:-";
        char c;
        cin>>c;
        //fetching
        cout<<hash[c]<<endl;
    }
    return 0;
}