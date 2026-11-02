class Solution {
public:
    int minSwaps(string s) {
        int zeros = 0;
        int ones = 0;
        int missZeros = 0;
        int missOnes = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1') ones++;
            else zeros++;
        }
        if(abs(zeros - ones) > 1) return -1;

        for(int i = 0; i < s.size(); i += 2){
            if(s[i] == '1') missZeros++;
            else missOnes++;
        }
        return zeros == ones ? min(missZeros, missOnes) : zeros > ones ? missZeros : missOnes;
    }
};