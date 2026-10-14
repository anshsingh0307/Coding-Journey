class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0 ;
        int sum2 = 0 ;
        for(int i=0 ; i<nums.size() ; i++){
            sum2+=nums[i];
            int n = nums[i];
            while(n>0){
                int r = n%10 ;
                sum1+=r;
                n/=10 ;
            }
        }
        return abs(sum1-sum2) ;
    }
};