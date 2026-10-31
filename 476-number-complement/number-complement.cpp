class Solution {
public:
    int findComplement(int num) {
        if(num == 1) return 0;
        int end = 0;
        for(long long i = 1; i <= num; i *= 2){
            end += i ;
        }
        return (num ^ end);
    }
};