class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() < 2) return 0;
        int left = 0;
        int right = height.size() - 1;
        int lmax = 0;
        int rmax = 0;
        int water = 0;

        while(left < right){
            if(height[left] < height[right]){
                if(height[left] >= lmax) lmax = height[left];
                else water += lmax - height[left];
                left++;
            }
            

            else{
                if(height[right] >= rmax) rmax = height[right];
                else water += rmax - height[right];
                right--;
            }
            
        }
        return water;
    }
};