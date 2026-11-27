class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> temp_map;

        for(string str : strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            temp_map[temp].push_back(str);
        }
        for(auto temp : temp_map) result.push_back(temp.second);
        return result;
    }
};