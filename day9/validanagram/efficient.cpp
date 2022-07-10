/*Given two strings s1 and s2, return true if s2 is an anagram of s1, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or
phrase,typically using all the original letters exactly once.return 1 if true or 0 if 
false.*/
#include <bits/stdc++.h>
using namespace std;

int solve(string s1, string s2){
        int count[256]={0};
        int i;
    for(int i=0;s1[i]&&s2[i];i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    if (s1.length()!=s2.length())
        return 0;
    for (i = 0; i < 256; i++)
        if (count[i])
            return 0;
    return 1;
}

int main(){
    string s1="dusty";
    string s2="study";
    cout<<solve(s1,s2);
}