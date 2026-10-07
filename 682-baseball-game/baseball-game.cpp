class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "C"){
                ans.pop_back();
            }
            else if(operations[i] == "+"){
                int x = ans[ans.size() - 1] + ans[ans.size() - 2];
                ans.push_back(x);
            }
            else if(operations[i] == "D"){
                int a = 2 * ans[ans.size() - 1];
                ans.push_back(a);
            }
            else{
                ans.push_back(stoi(operations[i]));
            }
        }
        int sum = 0;
        for(int i = 0; i < ans.size(); i++){
            sum += ans[i];
        }
        return sum;
    }
};