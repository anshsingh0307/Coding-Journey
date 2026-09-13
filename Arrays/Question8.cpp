//Linear search
#include<bits/stdc++.h>
using namespace std ;
    int linearSearch(vector<int>& nums, int target) {
        int loc=-1;
        int n=nums.size() ;
        for(int i=0 ; i<n ;i++){
            if(nums[i]==target){
                loc=i ;
                break ;
            }
        }
        return loc ;
    }
    int main(){
        vector<int>nums={1,2,3,4,5,6};
        int target = 5 ;
        cout << linearSearch(nums,target);
    
    }
