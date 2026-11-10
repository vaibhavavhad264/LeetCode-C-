class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        int n = s1.size();
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        bool s1isBreakings2 = true;
        bool s2isBreakings1 = true;

        for(int i = 0; i < n; i++){
            if(s1[i] < s2[i]) s1isBreakings2 = false;
            if(s2[i] < s1[i]) s2isBreakings1 = false;
        }
        if(s1isBreakings2 || s2isBreakings1) return true;
        else return false;
    }
};