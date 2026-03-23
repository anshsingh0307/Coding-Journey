//Maximum subarray sum (Brute Force)
#include <bits/stdc++.h>
using namespace std ;
    int sums(vector<int>&nums){
        int n=nums.size();
        int maximum=INT_MIN;
        for(int i=0 ; i<n ; i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=sum+nums[j];
                maximum=max(maximum,sum);
            }
        }
        return maximum ;
        
    }
int main() {
    vector<int>nums={-2, -3, -7, -2, -10, -4};
    cout << sums(nums) ;
    return 0 ;
}