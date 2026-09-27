class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long rem = 0;
        long num = x;

        while(num != 0){
            rem = (rem * 10) + (num % 10);
            num = num / 10;
        }
        return (rem == x);
    }
};