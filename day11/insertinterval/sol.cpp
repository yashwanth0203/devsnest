/*Given array of non-overlapping intervals, we have interval[i] = [starting, ending]
which is the start and end of given interval and the intervals is sorted in ascending
order from start. We are also given an interval arr = [start, end] that represents the
start and end of another interval.Insert arr into intervals such that intervals is still
sorted in ascending order by starti and intervals still does not have any overlapping
intervals we may also merge the intervals if necessary.
Return the interval array after the insertion.*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<vector<int>> intervals, int n, vector<int> arr){
//CODE HERE 
    vector<vector<int>>result;
    for(vector<int>in:intervals){
            if(in[1]<arr[0]){
                result.push_back(in);
            }
            else if(arr[1]<in[0]){
                result.push_back(arr);
                arr=in;
            }
            else{
                arr[0]=min(arr[0],in[0]);
                arr[1]=max(arr[1],in[1]);
            }
    }
    result.push_back(arr);
    return result;
}

int main(){
    vector<vector<int>>arr={{1,2},{3,5},{8,10},{12,16}};
    vector<int>nums={4,8};
    vector<vector<int>>res=solve(arr,arr.size(),nums);
    for(vector<int>in:res){
        for(int i:in){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}