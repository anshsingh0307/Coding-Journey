//Two Sum (Brute force done by me)
#include <bits/stdc++.h>
using namespace std ;
vector<int> TwoSum(vector<int>&nums, int target){
    int n=nums.size() ;
    for(int i=0 ;i<n ; i++){
        for(int j=i+1 ;j<n ;j++){
            if(i!=j && nums[i]+nums[j]==target){
                vector<int>ans={i,j} ;
                 return ans ;
            }
        }
    }
    return {} ;
}

int main() {
    vector<int>nums={1,6,2,10,3} ;
    int target=7 ;
   vector<int>result=TwoSum(nums,target);
   for(int x:result){
    cout << x <<" " ;
   }
    return 0 ;
} 