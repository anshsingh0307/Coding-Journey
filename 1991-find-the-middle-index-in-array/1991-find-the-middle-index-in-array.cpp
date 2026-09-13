class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int totalsum=0 ;
        for(int i=0 ; i<n ;i++){
            totalsum+=nums[i];
        }
        int leftsum=0 ;
        for(int i=0 ; i<n ; i++){
            int rightsum=totalsum-nums[i]-leftsum ;

            if(leftsum==rightsum)
            return i ;

            leftsum+=nums[i];
        }
        return -1 ;
    }
};