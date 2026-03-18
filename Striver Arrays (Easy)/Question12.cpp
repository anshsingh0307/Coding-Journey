//Find the number that appeared only once 
#include <bits/stdc++.h>
using namespace std ;

int singleNumber(vector<int>&nums){
    vector<int>hash(1e6,0);
    int n=nums.size();
    for(int i=0 ; i<n ; i++){
        hash[nums[i]]+=1 ;
    }
    for(int i=0 ; i<n ; i++){
        if(hash[nums[i]]==1)
        return nums[i]; 
    }
    return -1 ;
}
int main (){
    vector<int>nums={1,2,2,4,3,1,4};
    cout<< singleNumber(nums);

}