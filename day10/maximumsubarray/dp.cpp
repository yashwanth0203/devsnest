/*Given an integer array nums, find the contiguous subarray (containing at least one 
number) which has the largest sum and return its sum.
A subarray is a contiguous part of an array*/

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int solve(int n,vector<int> arr){
    int max_sum=arr[0];
    int currsum=arr[0];
    for(int i=1;i<n;i++){
        currsum=max(arr[i],currsum+arr[i]);
        max_sum=max(max_sum,currsum);
    }
    return max_sum;
}

int main(){
    vector<int>arr={-5,-2,-3,-4};
    cout<<solve(arr.size(),arr);
    return 0;
}