class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> preSum{{{0, 1}}};
        int sum = 0;
        int count = 0;
        for(int num : nums){
            sum += num;
            if(preSum.count(sum - goal)) count += preSum[sum - goal];
            preSum[sum]++;
        }
        return count;
    }
};