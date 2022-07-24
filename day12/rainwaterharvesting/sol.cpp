/*Given n non-negative integers representing an elevation map where the width of each
 bar is 1, compute how much water it can harvest after raining .*/

#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> height){
//CODE HERE 
vector<int> leftMaxHeight(n) , rightMaxHeight(n);
    int left = 0 , right = 0;

    for(int i=0;i<n;i++)
    {
        leftMaxHeight[i] = left;
        rightMaxHeight[n-i-1] = right;

        left = max(left , height[i]);
        right = max(right , height[n-i-1]);
    }

    int totalWaterSaved = 0;
    for(int i=0;i<n;i++)
    {
        int currLevel = min(leftMaxHeight[i] , rightMaxHeight[i]);

        int currWater = currLevel - height[i];
        
        if(currWater > 0)
            totalWaterSaved += currWater;
    }


    return totalWaterSaved;

}