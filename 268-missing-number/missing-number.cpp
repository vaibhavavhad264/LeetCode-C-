class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x_or = nums.size();
        for(int i = 0 ;i < nums.size(); i++){
            x_or = x_or ^ i;
            x_or = x_or ^ nums[i];
        }
        return x_or;
    }
};