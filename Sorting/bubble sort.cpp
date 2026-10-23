#include <bits/stdc++.h>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
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
    bubble_sort(arr,n);
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