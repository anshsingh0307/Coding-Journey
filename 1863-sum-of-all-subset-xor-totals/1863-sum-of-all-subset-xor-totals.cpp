class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> subsets;
        subsets.push_back({});

        for(int num : nums) {
            int size = subsets.size();
            for(int i = 0; i < size; i++) {
                vector<int> temp = subsets[i];
                temp.push_back(num);
                subsets.push_back(temp);
            }
        }
        int sum = 0;

        for(auto sub : subsets) {
            int xorr = 0;
            for(int num : sub) {
                xorr = xorr ^ num;
            }
            sum += xorr;
        }
        return sum;
    }
};