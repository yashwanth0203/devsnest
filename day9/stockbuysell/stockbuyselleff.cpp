/*You are given an array of prices where prices[i] is the price of a given stock on an ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/
#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> prices){
    int minpricetillnow=INT_MAX;
    int maxprofit=0;
    for(int i=0;i<n;i++){
        maxprofit=max(maxprofit,prices[i]-minpricetillnow);
        minpricetillnow=min(minpricetillnow,prices[i]);
    }
    return maxprofit;
}

int main(){
    vector<int>prices={5,7,9,11,4,12};
    int n=prices.size();
    int profit;
    profit=solve(n,prices);
    cout<<profit;
    return 0;
}