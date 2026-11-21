class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        return findPeak(nums, left, right);
    }
    int findPeak(vector<int>& nums, int left, int right){
        if(left == right) return left;
        int mid = left + (right - left) / 2;
        if(nums[mid] > nums[mid + 1]) return findPeak(nums, left, mid);
        else return findPeak(nums, mid + 1, right);
    }
};