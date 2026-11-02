#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class minSwapBinary{
public:
    int minSwap(string s){
        int cnt0 = 0, cnt1 = 0;
        int miss0 = 0, miss1 = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1') cnt1++;
            else cnt0++;
        }

        if(abs(cnt0 - cnt1) > 1) return -1;
        
        for(int i = 0; i < s.size(); i += 2){
            if(s[i] == '0') miss1++;
            else miss0++;
        }
        return cnt0 == cnt1 ? min(miss0, miss1) : cnt0 > cnt1 ? miss0 : miss1;


    }
};


int main(){
    minSwapBinary m1;
    string bin = "101010";
    cout << m1.minSwap(bin) << endl;
    return 0;
}