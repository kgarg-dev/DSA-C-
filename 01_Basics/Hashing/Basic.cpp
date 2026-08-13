/* Welcome today we will be highlighting the usage and basic syntax for hashing.*/
/* basically hashing can be used to count occurences of an element in an array with reduced time complexity*/

#include<bits/stdc++.h>
using namespace std;
int hashh[10000000]; //now just change hash to hashh in precomputation and fetching , it will work fine.
int main(){
    int n;

    cout<<"enter size of array: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // precompute
    int hash[13] = {0}; //Problem?? -> we can only declare an array till size 10^6 only in main.

    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
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
        cout<<hash[number]<<endl;
    }
}