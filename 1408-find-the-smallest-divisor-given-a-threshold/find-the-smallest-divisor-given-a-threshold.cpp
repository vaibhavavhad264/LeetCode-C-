class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int minDiv = 1;
        int maxDiv = 0;
        for(int num : nums) maxDiv = max(maxDiv, num);

        while(minDiv < maxDiv){
            int mid = minDiv + (maxDiv - minDiv) / 2;
            int sum = 0;
            
            for(int num : nums){
                sum += ceil((double)num / mid);
            }
            if(sum > threshold) minDiv = mid + 1;
            else maxDiv = mid;
        }
        return minDiv;
    }
};