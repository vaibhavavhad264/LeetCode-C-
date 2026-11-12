class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int ans = 0;
        sort(nums.begin(), nums.end());

        while(i < j){
            ans = max(ans, (nums[i] + nums[j]));
            i++;
            j--;
        }
        return ans;
    }
};