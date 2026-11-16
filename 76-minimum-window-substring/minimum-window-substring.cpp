class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> mapT(265, 0);
        vector<int> mapS(265, 0);

        for(char ch : t) mapT[ch]++;
        
        int left = 0; int minLen = INT_MAX; int minStart = 0;

        for(int right = 0; right < s.size(); right++){
            mapS[s[right]]++;

            while(contains(mapT, mapS)){
                if(right - left + 1 < minLen){
                    minLen = right - left + 1;
                    minStart = left;
                }
                mapS[s[left++]]--;
            }
        }
        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }

    bool contains(vector<int>& mapT, vector<int>& mapS){
        for(int i = 0; i < mapS.size(); i++){
            if(mapT[i] > mapS[i]) return false;
        }
        return true;
    }
};