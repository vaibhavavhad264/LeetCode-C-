#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int minSum(vector<int> nums, int target){
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int minCount = INT_MAX;
        for(int right = 0; right < n; right++){
            sum += nums[right];

            while(sum >= target){
                minCount = min(minCount, right - left + 1);
                sum -= nums[left];
                left++;
            }
            
        }
        return minCount == INT_MAX ? 0 : minCount;
    }
};

int main(){
    Solution s;
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    cout << s.minSum(nums, 7) << endl;
    return 0;
}