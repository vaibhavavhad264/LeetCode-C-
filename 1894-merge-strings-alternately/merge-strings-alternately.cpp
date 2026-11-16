class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        int i = 0;
        int j = 0;
        while(i < word1.size() || j < word2.size()){
            if(word1.size() > i){
                str += word1[i];
                i++;
            }
            if(word2.size() > j){
                str += word2[j];
                j++;
            }
        }
        return str;
    }
};