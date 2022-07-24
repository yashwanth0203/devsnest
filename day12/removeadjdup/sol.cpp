/*Given a string s which consists of lowercase English letters. Removing duplicates
 means choosing two adjacent and equal letters and removing them.
We repeatedly make duplicate removals on s until we no longer can.
Return the final string after all such duplicate removals have been made.
(Answer is proven as unique)*/
using namespace std;
#include <bits/stdc++.h>

string solve(string s){
//CODE HERE 
    string ans;
    stack<char>res;
    for(int i=0;i<s.length();i++){
        if(res.empty()||res.top()!=s[i]){
            res.push(s[i]);
        }else{
            res.pop();
        }
    }
    while(!res.empty()){
        ans+=res.top();
        res.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

