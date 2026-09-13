// Move zeros to end 

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;  // position for next non-zero element

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector<int> nums = {2, 1, 0, 4, 6, 0, 9};

    moveZeroes(nums);

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}