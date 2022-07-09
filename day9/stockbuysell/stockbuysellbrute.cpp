/*You are given an array of prices where prices[i] is the price of a given stock on an ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/

#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> arr){
//CODE HERE 
    int max=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int profit=arr[j]-arr[i];
            if(profit>max)
                max=profit;
        }
    }
    return max;
}

int main(){
    vector<int>prices={5,7,9,11,4,12};
    int n=prices.size();
    int profit;
    profit=solve(n,prices);
    cout<<profit;
    return 0;
}