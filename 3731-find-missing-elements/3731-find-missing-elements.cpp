class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans ;
        set<int> s ;
        int min = nums[0];
        int max = nums[0];
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }

        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }

        for(int i=0 ; i<nums.size() ; i++){
            s.insert(nums[i]);
        }

        for(int i=min ; i<=max ; i++){
            if(s.find(i)==s.end())
            ans.push_back(i);
        }
       return ans ;
    }
};