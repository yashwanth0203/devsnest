/*Given an array arr containing n distinct numbers in the range [0, n], return the 
only number in the range that is missing from the array.*/

#include <bits/stdc++.h>
using namespace std;

int solve(int n,vector<int>arr){
    int a1=arr[0];
    for(int i=1;i<arr.size();i++){
            a1=a1^arr[i];
    }
    int a2=0;
    for(int i=1;i<=n;i++){
        a2=a2^i;
    }
    return a1^a2;
}

int main(){
    vector<int>arr={0,1,3,4};
    cout<<solve(4,arr);
    return 0;
}