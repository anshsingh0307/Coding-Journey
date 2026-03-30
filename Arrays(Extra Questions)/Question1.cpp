//Running sum of 1D array (Leetcode--->>>>> 1480)
#include <bits/stdc++.h>
using namespace std ;
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>runningSum(n);
        if (n==0) return {};
        int sum=0 ;
        for(int i=0 ;i<n ;i++){
            sum=sum+nums[i];
            runningSum[i]=sum ;
        }
        return runningSum ;
    }

int main() {
    vector<int>nums={1,2,3,4,5};
    vector<int>ans= runningSum(nums);
    for(int x : ans)
    cout << x << " " ;
    return 0 ;
}