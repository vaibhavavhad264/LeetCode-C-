#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
public:
    bool canBreak(string s1, string s2){
        int n = s1.size();
        bool s1canBreaks2 = true;
        bool s2canBreaks1 = true;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        for(int i = 0; i < n; i++){
            if(s1[i] < s2[i]) s1canBreaks2 = false;
            if(s2[i] < s1[i]) s2canBreaks1 = false;
        }

        if(s1canBreaks2 || s2canBreaks1) return true;
        else return false;
    }

};

int main(){
    Solution s1;
    cout << boolalpha << s1.canBreak("leetcode", "interview");
    return 0;
}