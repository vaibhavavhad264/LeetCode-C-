class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int miniCnt = INT_MAX;
        int n = nums.size();
        int left = 0;
        int sum = 0;
        
        
        for(int r = 0; r < n; r++){
            int cnt = 0;
            sum += nums[r];
            cnt++;
            
            while(sum >= target){
                miniCnt = min(miniCnt, r - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return miniCnt == INT_MAX ? 0 : miniCnt;
    }
};