/*Given an array of integers nums of size n and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
Note: The pair of integers must be in the order of their position in the array i.e., the smaller index first then comes the larger one.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, vector<int> nums, int target){
    unordered_map<int,int> hash;
        vector<int> result;
        for(int i=0; i<nums.size(); i++ ){
            
            int numbertofind = target - nums[i];

            if(hash.find(numbertofind) != hash.end()){
                result.push_back(hash[numbertofind]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]]= i;
        
        }
        return result;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements one by one"<<endl;
    vector<int>arr;
    int num,target;
    for(int i=0;i<n;i++){
        cin>>num;
        arr.push_back(num);
    }
    cout<<"Enter the target element: ";
    cin>>target;
    vector<int>res(2,0);
    res=solve(n,arr,target);
    for (int i=0;i<2;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}