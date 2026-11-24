class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size() < 1LL * m * k) return -1;
        int minDay = INT_MAX;
        int maxDay = 0;
        for(int bD : bloomDay){
            minDay = min(minDay, bD);
            maxDay = max(maxDay, bD);
        }

        while(minDay < maxDay){
            int mid = minDay + (maxDay - minDay) / 2;
            int count = 0;
            int bouquet = 0;

            for(int i = 0; i < bloomDay.size(); i++){
                if(bloomDay[i] <= mid){
                    count++;
                    if(count == k){
                        bouquet++;
                        count = 0;
                    }
                }
                else count = 0;
                
            }
            if(bouquet < m) minDay =  mid + 1;
            else maxDay = mid;
        }
        return minDay ;
    }
};