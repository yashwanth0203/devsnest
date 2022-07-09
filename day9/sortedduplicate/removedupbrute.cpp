/*Given an array arr of size n sorted in non-decreasing order,
 remove the duplicates in-place such that each unique element appears only once
  keeping the relative order of the element same.*/
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, vector<int> arr){ 
vector<int> ans;
ans.push_back(arr[0]);
for(int i=0;i<n;i++){
    if(ans[ans.size()-1]!=arr[i]){
        ans.push_back(arr[i]);
    }
}
return ans;
}

int main(){
  vector<int>arr={1,2,2,2,3,3,4,5,6};
  int n=arr.size();
  vector<int>res;
  res=solve(n,arr);
  for(int i=0;i<res.size();i++){
    cout<<res[i];
  }
  return 0;
}