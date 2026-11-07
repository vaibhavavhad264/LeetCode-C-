#include<iostream>
#include<math.h>
using namespace std;

class Solution{
public:
    
    bool squareSum(int c){
        long long left = 0;
        long long right = sqrt(c);

        while(left <= right){
            long long leftSqr = left * left;
            long long rightSqr = right * right;
            long long sum = leftSqr + rightSqr;

            if(sum == c) return true;
            else if ( sum > c) right--;
            else left --;
        }
        return false;
    }
};


int main(){
    Solution s1;
    cout << boolalpha << s1.squareSum(6) << endl;
    return 0;
}