//Search Insert Position (Leetcode----->>>>>35)
#include<bits/stdc++.h>
using namespace std ;
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
          auto x=lower_bound(nums.begin(),nums.end(),target);
            return x-nums.begin() ;
    }
