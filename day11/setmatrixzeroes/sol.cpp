/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and 
column to 0’s, and return the matrix.You must do it in place.*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<vector<int>> matrix){
//CODE HERE 
    int m=matrix.size();
    int n=matrix[0].size();
    bool flagr=false;
    bool flagc=false;
    //bool flagm=false;

    for(int i=0;i<n;i++){
        if(matrix[0][i]==0){
            flagr=true;
            break;
        }
    }

    for(int i=0;i<m;i++){
        if(matrix[i][0]==0){
            flagc=true;
            break;
        }
    }

    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][j]==0){
                //flagm=true;
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
//if(flagm==true){
    for(int i=1;i<n;i++){
        if(matrix[0][i]==0){
            for(int j=1;j<m;j++){
                matrix[j][i]=0;
            }
        }
    }

    for(int i=1;i<m;i++){
        if(matrix[i][0]==0){
            for(int j=1;j<n;j++){
                matrix[i][j]=0;
            }
        }
    }
//}

    if(flagr==true){
        for(int i=0;i<n;i++){
            matrix[0][i]=0;
        }
    }

    if(flagc==true){
        for(int i=0;i<m;i++){
            matrix[i][0]=0;
        }
    }
    return matrix;
}

int main(){
    vector<vector<int>>arr={{0,1,2,0},{1,2,3,4},{5,6,7,8},{1,3,5,7}};
    vector<vector<int>>res=solve(arr);
    for(vector<int>i:res){
            for(int j:i)
                cout<<j<<" ";
    }
    return 0;
}