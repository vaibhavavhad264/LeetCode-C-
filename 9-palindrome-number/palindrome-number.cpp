class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }
        long a;
        int temp = x;
        while (temp != 0) {
            int b = temp % 10;
            a = a * 10 + b;
            temp /= 10;
        }
        return a == x; 
    }
};