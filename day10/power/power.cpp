/*Implement pow(x, n), which calculates x raised to the power n.
Return the number*/

#include <bits/stdc++.h>
using namespace std;

int solve(int x, int n){
//CODE HERE 
    int temp;
    if(n==0){
        return 1;
    }
    temp=solve(x,n/2);
    if(n%2==0&&n>0){
        return temp*temp;
    }
    else
    {
        if(n%2!=0){
            if(n>0)
                return temp*temp*x;
            else
                return 1/(temp*temp*x);
        }
    }
}

int main(){
    int x=2;
    int n=-3;
    cout<<solve(x,n);
    return 0;
}