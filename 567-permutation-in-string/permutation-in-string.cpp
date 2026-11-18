class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(); int m = s2.size();
        if(n > m) return false;
        vector<int> mps1(26, 0);
        
        for(int i = 0; i < n; i++) mps1[s1[i] - 'a']++;

        for(int i= 0; i <= m - n; i++){
            vector<int> mps2(26, 0);
            for(int j = 0; j < n; j++){
                mps2[s2[i+j] - 'a']++;
            }
            if(isContain(mps1, mps2)) return true;
        }
        return false;
    }

    bool isContain(vector<int>& mps1, vector<int>& mps2){
        for(int i = 0; i < 26; i++){
            if(mps1[i] > mps2[i]) return false;
        }
        return true;
    }
};