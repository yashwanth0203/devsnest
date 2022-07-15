/*There is a programming language with only four operations and one variable X:
++X and X++ increment the value of the variable X by 1. --X and X-- decrements the
 value of the variable X by 1.Initially, the value of X is 0.Given an array of strings 
 operations containing a list of operations, return the final value of X after performing
  all the operations.*/

#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<string> arr){
//CODE HERE 
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]=="--X"||arr[i]=="X--"){
            x-=1;
        }
        if(arr[i]=="++X"||arr[i]=="X++"){
            x+=1;
        }
    }
    return x;
}

int main(){
    vector<string>arr={"--X","X++","X++"};
    cout<<solve(arr.size(),arr);
    return 0;
}