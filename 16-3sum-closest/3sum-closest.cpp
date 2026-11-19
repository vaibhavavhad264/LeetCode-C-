class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size() < 3) return 0;
        sort(nums.begin(), nums.end());
        int minCloset = 0;
        int mini = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            int sum = 0;
            int left = i + 1;
            int right = nums.size() - 1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                int diff =  abs(target - sum);
                if(diff < mini){
                    mini = diff;
                    minCloset = sum;
                }
                
                if(sum == target) return sum;
                else if(target > sum) left++;
                else right--;
            }
        }
        return minCloset;
    }
};