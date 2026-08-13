#include <bits/stdc++.h>
using namespace std;
void explainpair(){
    pair<int , int > p1={1,3}; //defining a pair
    cout<<p1.first<<endl;//we get 1
    cout<<p1.second<<endl;//we get 3

    //nested pairs:-
    pair<int ,pair<int,int>> p2= {1,{3,4}};
    cout<<p2.first<<endl;// we get 1
    cout<<p2.second.first<<endl;// we get 3
    cout<<p2.second.second<<endl;// we get 4

    //pair array
    pair<int , int> arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;// index 1 has value {2.5} and so 'arr[1].second' has 5 , so we get output 5.
}
int main(){
    explainpair();//calling of function
}
