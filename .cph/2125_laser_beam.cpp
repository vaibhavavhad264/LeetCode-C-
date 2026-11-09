#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    int noOfBeams(vector<string>& bank){
        int prev = 0;
        int sum = 0;
        
        for(int i =0; i < bank.size(); i++){
            int curr = count(bank[i].begin(), bank[i].end(), '1');
            if(curr == 0) continue;

            sum += curr * prev;
            prev = curr;
        }
        return sum;
    }
};

int main(){
    Solution s1;
    vector<string> str = {
        "01101",
        "00000",
        "011000",
        "00000"
    };

    cout << s1.noOfBeams(str);
    return 0;
}