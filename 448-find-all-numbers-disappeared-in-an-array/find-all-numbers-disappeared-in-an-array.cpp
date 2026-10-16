class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> finding(n + 1, false);
        for(int num : nums){
            finding[num] = true;
        }
        vector<int> ans;
        for(int i = 1; i <= n ; i++){
            if(! finding[i]){
                ans.push_back(i);
            }
        }
        return ans;

    }
};