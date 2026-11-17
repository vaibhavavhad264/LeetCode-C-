class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int left = 0;
        int maxFreq = 0;
        int maxLen = 0;
        vector<int> vt(26, 0);

        for(int right = 0; right < n; right++){
            vt[s[right] - 'A']++;

            maxFreq = max(maxFreq, vt[s[right] - 'A']);
            int windowLength = right - left + 1;

            if(windowLength - maxFreq > k){
                vt[s[left] - 'A']--;
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};