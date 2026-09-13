// Longest subarray with sum k (array has positive numbers and zeros)
#include<bits/stdc++.h>
using namespace std ;
    int longestSubarray(vector<int> &nums, int k){
        int left=0 ; int right=0 ;
        long long sum=nums[0];
        int maxLen=0;
        int n=nums.size();
        while(right<n){
            while(left<=right && sum>k){
                sum-=nums[left];
                left++ ;
            }
            if(sum==k){
                maxLen=max(maxLen,right-left+1);
            }
            right++ ;
            if(right<n) sum+=nums[right] ;
        }
        return maxLen ;
    }

