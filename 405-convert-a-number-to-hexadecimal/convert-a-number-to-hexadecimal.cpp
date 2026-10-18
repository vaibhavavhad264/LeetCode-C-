class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";
        string hexCode = "0123456789abcdef";
        string ans = "";

        unsigned int n = num;
        while(n > 0){
            int fnd = n % 16;
            ans = hexCode[fnd] + ans;
            n /= 16;
        } 
       
        return ans;
    }
};