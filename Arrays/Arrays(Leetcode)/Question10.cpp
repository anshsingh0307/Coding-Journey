//Range Sum Query (Leetcode --->>>> 303)

#include<bits/stdc++.h>
using namespace std ;

class NumArray {
public:
    vector<int>prefixSum ;
    NumArray(vector<int>& nums) {
       int current = 0 ;
       for(int i=0 ; i< nums.size() ; i++){
        current=current+nums[i];
        prefixSum.push_back(current);
       }
    }
    
    int sumRange(int left, int right) {
        int l ;
        int r = prefixSum[right];

        if(left>0){
        l = prefixSum[left-1] ;
        }
        else l = 0 ;

        return r-l ;
    }
};

