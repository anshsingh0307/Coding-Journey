//Find Pivot Index (Leetcode ------>>>>>>> 724
#include<bits/stdc++.h>
using namespace std ;
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int totalsum=0 ;
        for(int i=0 ; i<n ;i++){
            totalsum+=nums[i];
        }
        int leftsum=0 ;
        for(int i=0 ; i<n ; i++){
            int rightsum=totalsum-nums[i]-leftsum ;

            if(leftsum==rightsum)
            return i ;

            leftsum+=nums[i];
        }
        return -1 ;
    }

    int main(){
        vector<int>nums={1,7,3,6,5,6};
        cout << pivotIndex(nums) ;
    }
