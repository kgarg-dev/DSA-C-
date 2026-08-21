#include <bits/stdc++.h>
using namespace std;
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

 

// Example 1:
// Input: nums = [2,2,1]
// Output: 1

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]+=1;
        }
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it -> second ==1){
                return it->first;
            }
        }
        return 0;
    }
};

//this approach worked but if u see maps takes space so we have another wonderful appraoch:-
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
            return ans;
        }
        return 0;
    }
};
// in this approach we used XOR , so:-
// in XOR :- a^a^a..... (even times)=0 but for odd =a
// so as in question it is said that each number comes twice so XOR helped us.
// as a^b^b=a as a^0=a