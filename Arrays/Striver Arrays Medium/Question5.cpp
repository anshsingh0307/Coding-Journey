//Print the subarray with maximum subarray sum ...
#include <bits/stdc++.h>
using namespace std ;
    vector<int>ans (vector<int>&nums){
        int maxi=INT_MIN;
        int sum=0 ;
        int ansStart=-1 ;
        int ansEnd=-1 ;
        for(int i=0;i<nums.size();i++){
            int start=i ;
            if(sum==0) 
            sum=sum+nums[i];
            if(sum>maxi){
                maxi=sum ;
                ansStart=start , ansEnd=i ;
            }
            if(sum<0){
                sum=0 ;
            }
        } 
        vector<int>result ;
        for(int i=ansStart ; i<ansEnd ;i++){

        }
    }
int main() {
    
    return 0 ;
}