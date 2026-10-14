class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX ;
        for(int i=0 ; i<nums.size() ; i++){
            int sum = 0 ;
            int x = nums[i];
            while(x>0){
                int r = x%10;
                sum+=r ;
                x/=10;
            }
            mini = min(mini, sum);
        }
        return mini ;
    }
};