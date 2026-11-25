class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int count = 0;
        unordered_map<int, int> seen({{0, 1}});

        for(int num : nums){
            sum += num;
            if(seen.count(sum - k)) count += seen[sum - k];
            seen[sum]++;
        }
        return count;
    }
};