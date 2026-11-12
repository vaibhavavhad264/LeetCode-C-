#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

class Solution{
public:
    int minimizeMaxPairSum(vector<int>& nums){
        int j = nums.size() - 1;
        int i = 0;
        int ans = 0;
        sort(nums.begin(), nums.end());
        while(i < j){
            ans = max(ans, (nums[i] + nums[j]));
            i++;
            j--;
        }
        return ans;
    }
};
int main(){
    Solution s1;
    vector<int> nums = {1, 6, 5, 7, 5, 9};
    cout << s1.minimizeMaxPairSum(nums) << endl;
}