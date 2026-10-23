class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum ;
        vector<int> rightSum ;
        vector<int> ans(nums.size());

        int Lsum = 0;
        for(int i=0 ; i<nums.size() ; i++){ 
            leftSum.push_back(Lsum);
            Lsum+=nums[i];
        }

        int Rsum = 0 ;
        for(int i=nums.size()-1 ; i>=0 ; i--){
            rightSum.push_back(Rsum);
            Rsum+=nums[i];
        }
        reverse(rightSum.begin(),rightSum.end());

        for(int i=0 ; i<nums.size() ; i++){
            ans[i] = abs(leftSum[i]-rightSum[i]);
        }

        return ans ;
    }
};