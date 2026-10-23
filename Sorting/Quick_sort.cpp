#include <bits/stdc++.h>
using namespace std;

void display(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(vector<int>&arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(i<=high && arr[i]<=pivot){
            i++;
        }

        while(j>=low && arr[j]>pivot){
            j--;
        }

        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    int temp=arr[j];
    arr[j]=pivot;
    arr[low]=temp;

    return j;
}

void qs(vector<int>&arr,int low,int high){
    if(low<high){
        int pIndex=partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}

vector<int> quick_sort(vector<int>&arr){
    qs(arr,0,arr.size()-1);
    return arr;
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

    arr=quick_sort(arr);

    display(arr,n);
}