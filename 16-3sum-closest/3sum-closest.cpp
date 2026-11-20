class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size() < 3) return 0;
        sort(nums.begin(), nums.end());
        int closetSum = 0;
        int mini = INT_MAX;

        for(int i = 0; i < nums.size() - 2; i++){
            int left = i + 1;
            int right= nums.size() - 1;

            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == target) return sum;
                int diff = abs(target - sum);
                
                if(mini > diff){
                    mini = diff;
                    closetSum = sum;
                }
                
                if(sum > target) right--;
                else left++;
            }
        }
        return closetSum;
    }
};