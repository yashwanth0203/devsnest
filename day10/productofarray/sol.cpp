/*Given an integer array arr, return an array res such that res[i] is equal to the product
of all the elements of arr except arr[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) and without using the division operation*/

#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, vector<int> arr){
//CODE HERE 
    if(n==1){
        return {};
    }
    int *left=new int[sizeof(int)*n];
    int *right=new int[sizeof(int)*n];
    vector<int>prod;
    left[0]=1;
    right[n-1]=1;
    for(int i=1;i<n;i++){
        left[i]=left[i-1]*arr[i-1];
    }
    for(int j=n-2;j>=0;j--){
        right[j]=right[j+1]*arr[j+1];
    }
    int res;
    for(int i=0;i<n;i++){
        res=left[i]*right[i];
        prod.push_back(res);
    }
    return prod;
}

int main(){
    vector<int>arr={1,2,3,4};
    vector<int>res;
    res=solve(arr.size(),arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}