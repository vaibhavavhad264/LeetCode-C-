class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftBound = leftBoundary(nums, target);
        int rightBound = rightBoundary(nums, target);
        return {leftBound, rightBound};
    }
    int leftBoundary(vector<int>& nums, int target) {
        int index = -1; int high = nums.size() - 1; int low = 0;
        while(high >= low){
            int mid = low + (high - low) / 2;
            if(nums[mid] == target){
                index = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return index;
    }

    int rightBoundary(vector<int>& nums, int target) {
        int index = -1; int high = nums.size() - 1; int low = 0;

        while(high >= low){
            int mid = low + (high - low) / 2;
            if(nums[mid] == target){
                index = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return index;
    }
};