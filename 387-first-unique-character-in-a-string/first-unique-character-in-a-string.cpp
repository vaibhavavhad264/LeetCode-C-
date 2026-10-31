class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> len;

        for(char c : s){
            len[c]++;
        }
        for(int i = 0; i < s.length(); i++) {
            if(len[s[i]] == 1){ 
                return i; 
            }
        } 
        return -1; 
    } 
}; 
