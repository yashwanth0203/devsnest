/*Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers. 
If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).
The replacement must be inplace and use only constant extra memory.
Given an array of integers nums of size n, find the next permutation.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, vector<int> nums){
int i;
        for( i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break;
            }
        }
        if(i<0){reverse(nums.begin(),nums.end());}
        else{
            int j=n-1;
            while(j>=0 && nums[j]<=nums[i]){j--;}
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
        return nums; 
}

int main(){
    vector<int>arr={1,2,5,4,3};
    vector<int>res;
    res=solve(arr.size(),arr);
    for(int i=0;i<res.size();i++){
    cout<<res[i];
  }
    return 0;
}