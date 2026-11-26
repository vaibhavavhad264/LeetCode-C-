class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        unordered_map<int, int> find;
        find[0] = 1;
        for(int num: nums){
            sum += num;
            if(find.count(sum - k)) count += find[sum - k];
            find[sum]++;
        }
        return count;
    }
};