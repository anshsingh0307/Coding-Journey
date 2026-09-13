//Sort an array of only 0's , 1's and 2's
#include<bits/stdc++.h>
using namespace std ;
   void sortZeroOneTwo(vector<int>& nums) {
        int cnt0=0 , cnt1=0 ,cnt2=0 ;
        int n=nums.size();
        for(int i=0 ;i<n ;i++){
            if(nums[i]==0)cnt0++ ;
            else if(nums[i]==1)cnt1++;
            else cnt2++ ;
        }
        for(int i=0 ;i<cnt0 ;i++){
            nums[i]=0 ;
        }
         for(int i=cnt0 ;i<cnt0+cnt1 ;i++){
            nums[i]=1 ;
        }
         for(int i=cnt0+cnt1 ;i<n ;i++){
            nums[i]=2 ;
        }
    }