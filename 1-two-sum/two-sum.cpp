class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> findElement;

        for(int i = 0; i < nums.size(); i++){
            if(findElement.count(target - nums[i])) return {findElement[target - nums[i]], i};
            findElement[nums[i]] = i;
        }
        return {};
    }
};