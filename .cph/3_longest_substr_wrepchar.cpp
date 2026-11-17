#include<iostream>
#include<unordered_set>
using namespace std;

class Solution{
public:
    int lengthOfLongestSubstring(string s){
        unordered_set<char> st;
        int minLen = 0;
        int l = 0;

        for(int r = 0; r < s.size(); r++){
            while(st.find(s[r]) != st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            minLen = max(minLen, r - l + 1);
        }
        return minLen;
    }
};

int main(){
    Solution s;
    string str = "abcabcbb";
    cout << s.lengthOfLongestSubstring(str) << endl;
    return 0;
}