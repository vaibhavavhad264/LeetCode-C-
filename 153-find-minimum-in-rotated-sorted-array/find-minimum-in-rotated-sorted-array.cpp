class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        return findMini(nums, left, right);
    }
    int findMini(vector<int>& nums, int left, int right){
        if(left == right) return nums[left];
        int mid = left + (right - left) / 2;
        if(nums[mid] > nums[right]) return findMini(nums, mid + 1, right);
        else return findMini(nums, left, mid);
    }
};