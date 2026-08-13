//header file to be included:-
#include <bits/stdc++.h>
using namespace std;

/**************************function that does not return anything***************************/
void print(){
    cout<<"raj";
}
/**************************function that  return something***************************/
int sum(int a , int b){
    return a+b;
}

int main(){
    print();//void function being called
    cout<<endl;
    int s=sum(3,5);//int sum(int a , int b) function returned value assigned to a variable named 's'.
    cout<<s;
}