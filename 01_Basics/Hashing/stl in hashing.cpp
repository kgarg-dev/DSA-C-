//basically for range greater than 10^7 can not be stored in our hash array.
//also in map keys are index so no problem of size and it stores values in keys.
//so we take help of sets in stl.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // precompute
    map<int , int>mpp;
    //for characters we can simply do *map<char,int>mpp;*

    for(int i=0;i<n;i++){
        mpp[arr[i]] += 1;
    }

    // queries: the numbers we want the occurrences of
    cout<<"enter queries value:- ";
    int q;
    cin>>q;

    while(q--){
        cout<<"enter number:- ";

        int number;
        cin>>number;

        // fetching
        cout<<mpp[number]<<endl;
    }
}