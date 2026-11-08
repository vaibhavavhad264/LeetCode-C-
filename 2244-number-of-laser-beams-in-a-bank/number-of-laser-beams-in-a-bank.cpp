class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> ans;
        int result = 0;
        for(int i =0; i < bank.size(); i++){
            int c = count(bank[i].begin(), bank[i].end(), '1');
            if(c != 0){
                ans.push_back(c);
            }
        }
        if(ans.size() <= 1) return 0;

        for(int i = 0; i < ans.size() - 1; i++){
            result = result + ans[i] * ans[i + 1];
        }
        return result;
    }
};