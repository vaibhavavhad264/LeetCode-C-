class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int minSub = 0;
        int maxSub = 0;

        for(int num : nums){
            minSub = max(minSub, num);
            maxSub += num;
        }

        while(minSub < maxSub){
            int mid = minSub + (maxSub - minSub) / 2;
            int kSplit =  1;
            int sum = 0;
            for(int num : nums){
                if(sum + num > mid){
                    kSplit++;
                    sum = 0;
                }
                sum += num;
            }
            if(kSplit > k) minSub = mid + 1;
            else maxSub = mid;
        }
        return minSub;
    }
};