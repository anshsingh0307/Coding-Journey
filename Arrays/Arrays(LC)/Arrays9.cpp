//Third maximum number (Leetcode ---->>>> 414)

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        int count=1 ;

        for(int i=nums.size()-1 ; i>0 ; i--){
            if(nums[i]==nums[i-1])
            continue ;

            else
            count++ ;

            if(count==3){
            return nums[i-1];
            break ;
            }
        }
        return nums.back() ;
    }
};