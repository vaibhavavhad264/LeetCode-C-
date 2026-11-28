class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> arr(n, 0);
        for(auto booking : bookings){
            int start = booking[0];
            int end = booking[1];
            int seat = booking[2];

            arr[start - 1] += seat;
            if(end < n) arr[end] -= seat;
        }
        for(int i = 1; i < n; i++) arr[i] += arr[i - 1];
        return arr;
    }
};