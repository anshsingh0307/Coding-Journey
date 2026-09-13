// Maximum sum circular subarray (Leetcode---->>>>918)

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int globalMax = nums[0] , globalMin=nums[0] , currMax=0 , currMin=0 , total=0 ; 

        for(int i=0 ; i<nums.size() ; i++){
            currMax=max(currMax+nums[i] , nums[i]) ;
            currMin=min(currMin+nums[i] , nums[i]) ;
            total+=nums[i] ;
            globalMax=max(currMax,globalMax) ;
            globalMin=min(currMin,globalMin) ;
        }
        if(globalMax>0)
        return max(globalMax , total-globalMin) ;

        else
        return globalMax ;
    }
};