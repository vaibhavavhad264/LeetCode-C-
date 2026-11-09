#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
public:
    bool isStringClose(string s1, string s2){
        if(s1.size() != s2.size()) return true;

        vector<int> a(26, 0);
        vector<int> b(26, 0);

        for(int i = 0; i < s1.size(); i++){
            a[s1[i] - 'a']++;
            b[s2[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++){
            if((a[i] == 0 && b[i] != 0) || a[i] != 0 && b[i] == 0) return false;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return (a == b);
    }
};

int main(){
    Solution s1;
    cout << boolalpha << s1.isStringClose("abb", "bca") << endl;
    return 0;
}