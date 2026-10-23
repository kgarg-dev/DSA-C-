#include <bits/stdc++.h>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }
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
    insertion_sort(arr,n);
    display(arr,n);
}
/*
==========================================
            Time Complexity
==========================================
1.worst case-> O(n^2)
2.average case-> O(n^2)
3.best case-> O(n)
*/