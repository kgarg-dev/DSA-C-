#include <bits/stdc++.h>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void count_sort(int arr[],int n){
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    int count[maxi+1]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int index=0;
    for(int i=0;i<=maxi;i++){
        while(count[i]>0){
            arr[index]=i;
            index++;
            count[i]--;
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
    count_sort(arr, n);
    display(arr,n);
}