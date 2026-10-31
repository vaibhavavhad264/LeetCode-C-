class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long ans = 0;

        for(int i = 0; i < n; i++){

            int maxN = nums[i];
            int minN = nums[i];

            for(int j = i; j < n; j++){
                maxN = max(maxN, nums[j]);
                minN = min(minN, nums[j]);

                ans += maxN - minN;
            }

        }
        return ans;

    }
};