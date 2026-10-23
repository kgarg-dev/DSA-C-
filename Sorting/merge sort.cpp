#include <bits/stdc++.h>
using namespace std;
void display(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(vector<int>&arr,int low ,int mid,int high){
    int i=low;
    int j=mid+1;
    vector<int>result={};
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            result.emplace_back(arr[i]);
            i++;
        }
        else{
            result.emplace_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        result.emplace_back(arr[i]);
        i++;
    }
    while(j<=high){
        result.emplace_back(arr[j]);
        j++;
    }
    for(int k=low;k<=high;k++){
        arr[k]=result[k-low];
    }
}
void merge_sort(vector<int>&arr,int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<endl;
    vector<int>arr(n);
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    display(arr,n);
}