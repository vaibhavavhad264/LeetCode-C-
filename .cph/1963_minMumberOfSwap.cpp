#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int minSwap(string s){
        int size = 0;
        for(char ch : s){
            if(ch == '[') size++;
            else if(size > 0) size--;
        }
        return size;
    }
};

int main(){
    Solution s1;
    string s = "]]][[[][";
    cout << s1.minSwap(s) << endl;
    return 0;
}










