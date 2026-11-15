#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    int minPath(vector<vector<int>>& nums){
        int n = nums.size();
        vector<int> ans(nums[n-1].begin(), nums[n-1].end());
        for(int i = n - 2; i >= 0; i--){
            for(int j = 0; j < nums[i].size(); j++){
                ans[j] = min(ans[j], ans[j+1]) + nums[i][j];
            }
        }
        return ans[0];
    }
};

int main(){
    Solution s1;
    vector<vector<int>> nums = {{2}, {3, 4}, {1, 4, 3}, {3, 4, 7, 8}};
    cout << s1.minPath(nums) << endl;
    return 0;
}