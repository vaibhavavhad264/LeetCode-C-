class Solution {
public:
    string reverseStr(string s, int k) {
        int st = 0;
        int end = min(k, (int) s.size());

        while(st < s.size()){
            reverse(s.begin() + st, s.begin() + end);
            st = st + 2 * k;
            end = min(st + k, (int) s.size());
        }
        return s;
    }
};