//Move zeroes to end ... 
//This code does not pass all the test cases see its part 2 
#include <bits/stdc++.h>
using namespace std ; 

    void moveZeroes(vector<int> & nums) {
        int n=nums.size();
        int count=0 ;
        for(int i= 0 ; i<n ; i++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                count++ ;
            }
        }
        for(int i=0 ; i<count ; i++)
                nums.push_back(0);
    }


int main() {
    vector<int>nums={2,1,0,4,6,0,9} ;
    moveZeroes(nums) ;
    for(int i=0 ;i<nums.size();i++){
        cout<<nums[i] ;
    }
    
    return 0 ;
}