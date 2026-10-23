#include <bits/stdc++.h>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    display(arr,n);
}
/*
==========================================
            Time Complexity
==========================================
1.worst case-> O(n^2)
2.average case-> O(n^2)
3.best case-> O(n^2)
*/