//Optimal solution .
#include <bits/stdc++.h>
using namespace std ;
    int sums(vector<int>&nums){
        int n=nums.size();
        int maximum=INT_MIN;
        int sum=0 ;
            for(int j=0;j<n;j++){
                sum=sum+nums[j];
                maximum=max(maximum,sum);
                if(sum<0)
                sum= 0 ;
            }
        return maximum ;
        
    }
int main() {
    vector<int>nums={-2, -3, -7, -2, -10, -4};
    cout << sums(nums) ;
    return 0 ;
}