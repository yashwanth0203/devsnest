/*You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to modify the input 2D matrix directly.
You are not allowed to allocate another 2D matrix and do the rotation.*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<vector<int>> mat){
//CODE HERE 
    int m=mat.size();
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<m;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
    return mat;
}

int main(){
    vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>>res=solve(arr);
    for (auto it : res) {
        for (auto ij : it) {
            cout << ij << " ";
        }
        cout << endl;
    }
    return 0;               
}
