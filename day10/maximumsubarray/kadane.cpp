/*Given an integer array nums, find the contiguous subarray (containing at least one 
number) which has the largest sum and return its sum.
A subarray is a contiguous part of an array*/

//This works only if atleast one of the numbers is positive.
#include <bits/stdc++.h>
using namespace std;

int solve(int n,vector<int> arr){
    int max_sum=INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum>max_sum){
            max_sum=currsum;
        }
        if(currsum<0){
            currsum=0;
        }
    }
    return max_sum;
}