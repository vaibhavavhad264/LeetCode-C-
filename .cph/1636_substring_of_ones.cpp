#include<iostream>

using namespace std;

class substringOfOnes{
public:
    int maxString(string s){
        long long mod = 1000000007;
        long count = 0;
        long ans = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                count++;
            }
            else{
                ans = (ans + count * (count + 1) / 2) % mod;
                count = 0;
            }
        }
        ans = (ans + count * (count + 1) / 2) % mod;
        return ans;

    }
};

int main(){
    substringOfOnes s1;
    string str = "011001111";
    cout <<s1.maxString(str) << endl;
}