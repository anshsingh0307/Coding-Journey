// Set matrix zeroes (Leetcode---->>> 73)

#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    void markRow(vector<vector<int>>& matrix , int i){
            for(int j=0 ; j<matrix[0].size() ; j++){
                if(matrix[i][j]!=0)
                matrix[i][j]=-1 ;
            }
        }

        void markCol(vector<vector<int>>& matrix , int j){
            for(int i=0 ; i<matrix.size() ; i++){
                if(matrix[i][j]!=0)
                matrix[i][j]=-1 ;
            }
        }

    void setZeroes(vector<vector<int>>& matrix) {
       int n = matrix.size();
       int m = matrix[0].size();

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(matrix[i][j]==0){
                    markRow(matrix , i);
                    markCol(matrix , j);
                }
            }
        }

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(matrix[i][j]==-1)
                matrix[i][j]=0 ;
            }
        }
    }
};