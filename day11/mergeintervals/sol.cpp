/*Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping
 intervals and return an array of the non-overlapping intervals that cover all the 
 intervals in the input.*/

 #include <bits/stdc++.h>
 using namespace std;

 vector<vector<int>> solve(vector<vector<int>> intervals){
//CODE HERE
    vector<vector<int>>mergedIntervals;
    if(intervals.size()==0){
        return mergedIntervals;
    }
    sort(intervals.begin(),intervals.end());
    vector<int>tempInterval=intervals[0];

    for(auto it:intervals){
        if(it[0]<=tempInterval[1]){
            tempInterval[1]=max(it[1],tempInterval[1]);
        }
        else{
            mergedIntervals.push_back(tempInterval);
            tempInterval=it;
        }
    }
    mergedIntervals.push_back(tempInterval);
    return mergedIntervals;
}

int main(){
    vector<vector<int>>arr={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>>res=solve(arr);
    for(vector<int>i:res){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}