class Solution {
public:
    int arrangeCoins(int n) {
    //     long long ans = 0;
    //     for(int i = 1; i <= n; i++){
    //         ans += i;
    //         if(ans == n) return i;
    //         else if(ans > n) return i - 1;
    //     }
    //     return 0;
    // }

        return (sqrt(1LL + 8LL * n) - 1) / 2;
    }
};