class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> arr(1001);
        for(auto trip : trips){
            arr[trip[1]] += trip[0];
            arr[trip[2]] -= trip[0];
        }
        int load = 0;
        for(int i = 0; i < 1001; i++){
            load += arr[i];
            if(load > capacity) return false;
        }
        return true;
    }
};