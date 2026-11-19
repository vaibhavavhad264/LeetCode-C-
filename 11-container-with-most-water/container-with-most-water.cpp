class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while(left < right){
            maxArea = max(maxArea, min(height[left], height[right]) * (right - left));
            if(height[right] > height[left]) left++;
            else right--;
        }
        return maxArea;
    }
};