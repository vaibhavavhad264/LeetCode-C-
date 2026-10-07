class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z = nums.size();
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                z = i;
                break;
            }
        }

        for(int i = z + 1; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[z], nums[i]);
                z++;
            }
        }
    }
};