/*Given n non-negative integers a1, a2, …, an, where each represents a point at
 coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i
 are at (i, ai) and (i, 0).Find two lines, which, together with the x-axis forms a 
 container, such that the container contains the most water.Return the maximum amount of
  water a container can store.*/

#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> arr){
    int l=0;
    int r=arr.size()-1;
    int max_water=0;

    while(l<r){
        int hl=arr[l];
        int hr=arr[r];
        int curr_water=min(hl,hr)*(r-l);
        if(curr_water>max_water){
            max_water=curr_water;
        }
        if(hl<=hr)
            l++;
        if(hl>=hr)
            r--;
    }
    return max_water;

}

int main(){
    vector<int>arr={1,8,6,2,5,4,8,3,7};
    cout<<solve(arr.size(),arr);
}