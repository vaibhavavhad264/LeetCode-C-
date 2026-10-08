class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> indices;
        vector<int> solution;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == c) indices.push_back(i);
        }

        for(int i = 0; i < s.size(); i++){
            int min_val = 100000;
            for(int j : indices){
                min_val = min(min_val, abs(j-i));
            }
            solution.push_back(min_val);
        }   
        return solution;

    }
};