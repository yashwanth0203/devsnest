/*Given an array of intervals such that interval[i] = [starti, endi], return the 
minimum number of intervals needed to remove for making the remaining intervals
 non-overlapping.*/

#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> interval){

    sort(interval.begin(),interval.end());
    int count=0;
    int n=interval.size();
    int left=0;
    int right=1;
    while(right<n){
     if(interval[left][1]<=interval[right][0]){//Non overlapping
            left=right;
            right+=1;
        }
     else if(interval[left][1]<=interval[right][1]){//Right overlapping
            count+=1;//Remove right
            right+=1;
          }
     else if(interval[left][1]>interval[right][1]){//Right interval inside the left
            count+=1;//Remove left
            left=right;
            right+=1;
         }
    }
    return count;
}

int main(){
    vector<vector<int>>arr={{1,3},{2,6},{8,10},{15,18}};
    cout<<solve(arr);
    return 0;
}