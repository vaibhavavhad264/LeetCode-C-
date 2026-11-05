class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left = 0;
        long long right = sqrt(c); 

        while (left <= right) {
            long long sqL = left * left;
            long long sqR = right * right;
            long long sum = sqL + sqR;

            if (sum == c) return true;
            else if (sum > c) right--; 
            else left++;  
        }
        return false;
    }
};