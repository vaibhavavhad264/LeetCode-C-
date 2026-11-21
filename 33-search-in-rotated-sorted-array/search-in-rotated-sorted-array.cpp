class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size() - 1;
        return findElement(nums, target, left, right);
    }

    int findElement(vector<int>& nums, int target, int left, int right){
        if(left > right) return -1;

        int mid = left + (right - left) / 2;
        if(nums[mid] == target) return mid;

        if(nums[left] <= nums[mid]){
            if(nums[left] <= target && target < nums[mid]) return findElement(nums, target, left, mid - 1);
            else return findElement(nums, target, mid + 1, right);
        }

        else{
            if(nums[mid] < target && target <= nums[right]) return findElement(nums, target, mid + 1 , right);
            else return findElement(nums, target, left, mid - 1);
        }
    }
};