class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int arr[1001] = {};
        for(auto a : trips){
            arr[a[1]] += a[0];
            arr[a[2]] -= a[0];
        }
        for(int i = 0; capacity >= 0 && i < 1001; i++){
            capacity -= arr[i];
        }
        return capacity >= 0;
    }
};