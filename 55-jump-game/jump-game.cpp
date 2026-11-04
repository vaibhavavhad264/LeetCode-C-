class Solution {
public:
    bool canJump(vector<int>& nums) {

        int j = 0; 
        for(int i = 0; i < nums.size(); i++){
            
            if (i > j) {
                return false;
            }
            if (i + nums[i] > j) {
                j = i + nums[i];
            }
            
            if(j >= nums.size() - 1) {
                return true;
            }
        }
        return true;
    }
};
