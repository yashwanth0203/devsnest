/*You are given a string s containing just the characters in an order '(' , ')' , ‘{’ , ‘}’ ,
 '[' and ']' , determine if the input string is valid. Return 1 if valid else 0 if 
 invalid.
An input string is said to be valid iff:
1.)Open brackets must be closed by the same type of brackets.
2.)Open brackets must be closed in the correct order.
*/

#include <bits/stdc++.h>
using namespace std;

int solve(string str){
    stack<int>st;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            st.push(str[i]);
        }
        else{
            if(st.empty())return 0;
            char c=st.top();
            st.pop();
            if((str[i]==')'&&c=='(')||
               (str[i]=='}'&&c=='{')||
               (str[i]==']'&&c=='['))
               continue;
            else
                return 0;
        }
    }
    return st.empty();
}

int main(){
    string str="()[]{}";
    cout<<solve(str);
    return 0;
}