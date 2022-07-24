/*Given a circular integer array nums (i.e., the next element of nums[nums.length - 1]
 is nums[0]), return the next greater number for every element in nums.
The next greater number of a number x is the first greater number to its traversing-
order next in the array, which means you could search circularly to find its next 
greater number. If it doesn’t exist, return -1 for this number.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, vector<int> nums){
//CODE HERE 
    vector<int>nums1=nums;
    int max;
    for(int i=0;i<n;i++){
       int count=0;
       int flag=0;
       int j=(i+1)%n;
        max=nums1[i];
        while(count<n){
            if(nums1[j]>max){
                max=nums1[j];
                flag=1;
                break;
            }
            j=(j+1)%n;
            count++;
        }
        if(flag==0)nums[i]=-1;
        else
             nums[i]=max;
    }
    return nums;
}