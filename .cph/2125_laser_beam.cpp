#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    int noOfBeams(vector<string>& bank){
        int prev = 0;
        int res = 0;

        for(int i = 0 ; i < bank.size(); i++){
            int currnt = count(bank[i].begin(), bank[i].end(), '1');
            if(currnt == 0) continue;
            res += prev * currnt;
            prev = currnt;
        }
        return res;
    }
};

int main(){
    Solution s1;
    vector<string> str = {
        "01101",
        "00000",
        "011000",
        "01000"
    };

    cout << s1.noOfBeams(str);
    return 0;
}