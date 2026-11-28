class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> arr(52);

        for(auto range : ranges){
            arr[range[0]] += 1;
            arr[range[1] + 1] -= 1;
        }

        for(int i = 1; i < 52; i++) arr[i] += arr[i - 1];
        for(int i = left; i <= right; i++){
            if(arr[i] <= 0) return false;
        }
        return true;
    }
};