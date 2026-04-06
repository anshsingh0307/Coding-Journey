//Maximum average sum 1 (Leetcode------>>>>>>643)
#include<bits/stdc++.h>
using namespace std ;
     double findMaxAverage(vector<int>& nums, int k) {
        int sum=0 ;
        for(int i=0 ; i<k ;i++){
            sum+=nums[i];
        }
            int maxSum=sum ;
            int startIndex=0;
            int endIndex=k ;
            while(endIndex<nums.size()){
                sum-=nums[startIndex];
                startIndex++;
                sum+=nums[endIndex];
                endIndex++;
                maxSum=max(maxSum,sum);
            }
            return (double)maxSum/k ;
        }

    int main(){
        vector<int>nums={1,12,-5,-6,50,3};
        cout<<findMaxAverage(nums,4);
    }
