// Left rotate an array by k places 
#include<bits/stdc++.h>
using namespace std ;
void rotate(vector<int>&nums, int k){
    vector<int> temp(k) ;
    int n=nums.size() ;
    for(int i=0 ; i<k ; i++){
        temp[i]=nums[i];
    }
    for(int i=0 ; i<n-k ; i++){
        nums[i]=nums[i+k] ;
    }
    for(int i=n-1 ; i>=n-k ;i--){
        nums[i]=temp[i-(n-k)] ;
    }
}
int main (){
    vector<int>nums={1,2,3,4,5,6} ;
    int k=2 ;
   rotate(nums,k);
   for(int i=0 ; i<nums.size() ;i++){
    cout << nums[i];
   }
    return 0 ;
}