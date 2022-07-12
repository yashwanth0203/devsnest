/*Given an array arr containing n distinct numbers in the range [0, n], return the 
only number in the range that is missing from the array.*/

#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> arr){
//CODE HERE 
    int arr_sum=0;
    for(int i=0;i<n;i++){
        arr_sum+=arr[i];
    }
    int total_sum=(n*(n+1))/2;
    int result=total_sum-arr_sum;
    return result;
}

int main(){
    vector<int>arr={0,1,3,4};
    cout<<solve(4,arr);
    return 0;
}