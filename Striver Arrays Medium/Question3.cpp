//To find the majority element 
#include <bits/stdc++.h>
using namespace std ;

    int majorityElement(vector<int>&nums){
        int n=nums.size();
        int hash[1000000]={0} ;
        for(int i=0 ; i<n ; i++){
            hash[nums[i]]++ ;
        }
        for(int i=0 ; i<n ; i++){
            if(hash[nums[i]]>n/2)
            return nums[i];
        }
        return -1 ;
    }
int main() {
    vector<int>nums={7, 0, 0, 1, 7, 7, 2, 7, 7} ;
     cout <<  majorityElement(nums) ;
    return 0 ;
}