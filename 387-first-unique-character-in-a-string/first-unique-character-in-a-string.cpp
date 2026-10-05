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
        } // Closes the for-loop
        
        return -1; // Properly inside the function now!
    } // Closes the firstUniqChar function
}; // Closes the Solution class
