class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prevSum = 0;
        int ans = 0;
        unordered_map<int, int> find{};
        find[0] = 1;
        for(int num : nums){
            prevSum = ((prevSum + num) % k + k) % k;
            ans += find[prevSum];
            find[prevSum]++;
        }
        return ans; 
    }
};