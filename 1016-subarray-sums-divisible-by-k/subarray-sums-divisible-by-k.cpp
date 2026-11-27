class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map<int, int> findIn;
        findIn[0] = 1;
        int leftSum = 0;
        int count = 0;
        for(int num : nums){
            leftSum = ((leftSum + num) % k + k) % k; 
            count += findIn[leftSum];
            findIn[leftSum]++;
        }
        return count;
    }
};