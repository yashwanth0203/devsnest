/*Given an array of integers nums of size n and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
Note: The pair of integers must be in the order of their position in the array i.e., the smaller index first then comes the larger one.*/

#include <bits/stdc++.h>
using namespace std;

bool solve(int n,vector<int> arr,int target){
    sort(arr.begin(),arr.end());
    int l=0,r=n-1;
    while(l<r){
        if(arr[l]+arr[r]==target){
           cout<<l<<" "<<r;
           return 1;
        }
        else if(arr[l]+arr[r]<target){
            l++;
        }
        else r--;
    }
    return 0;
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
    bool res;
    res=solve(n,arr,target);
    if(res)
        cout<<"Pair exists";
    else
        cout<<"Pair doesn't exist";
    return 0;

}