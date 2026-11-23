class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = 0;
        int mini = 1;
        for(int weight : weights){
            maxi += weight;
            mini = max(mini, weight);
        }

        while(mini < maxi){
            int mid = mini + (maxi - mini) / 2;

            int sum = 0;
            int day = 1;

            for(int weight : weights){
                if(sum + weight > mid){
                    day++;
                    sum = 0;
                }
                sum += weight;
            }
            if(day > days) mini = mid + 1;
            else maxi = mid;
        }
        return mini;
    }
};