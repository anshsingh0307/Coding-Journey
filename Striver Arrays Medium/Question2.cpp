//Sort the array of 1's 2's and 0's(Brute force)
#include<bits/stdc++.h>
using namespace std ;
    void sortarray(vector<int>&nums){
        for(int i=0 ; i<nums.size()-1; i++){
            if(nums[i+1]<nums[i])
            swap(nums[i+1],nums[i]);
        }
        for(int i=0 ;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])
            sortarray(nums);
        }
    }
    int main(){
        vector<int>nums={1,0,2,1,0}; 
        sortarray(nums);
        for(int i=0 ;i<nums.size();i++){
            cout<<nums[i] << " ";
        }
    }
