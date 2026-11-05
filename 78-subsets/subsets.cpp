class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>subset = {{}};

        for(int num : nums){
            int n = subset.size();
            for(int i = 0; i < n; i++){
                subset.push_back(subset[i]);
                subset.back().push_back(num);
            }
        }
        return subset;
    }
};