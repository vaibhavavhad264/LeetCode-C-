class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }

        long rem = 0;
        int temp = x;

        while(temp != 0){
            int b = (temp % 10);
            rem = (rem * 10) + b;
            temp /= 10;
        }
        return rem == x;
    }
};