// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.empty()) return 0;
//         unordered_set<int> set(nums.begin(), nums.end());
//         int count = 0;

//         for(int num : nums){
//             if(! set.count(num-1)){
//                 int dummy = 1;
//                 int curr = num + 1;
//                 while(set.count(curr)){
//                     dummy++;
//                     curr++;
//                 }
//                 count = max(dummy, count);
//             }
//         }  
//         return count;
//     }
// };

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int count = 0;

        for (int num : st) {

            // Start only if num is the first number
            if (!st.count(num - 1)) {

                int curr = num;
                int dummy = 1;

                while (st.count(curr + 1)) {
                    curr++;
                    dummy++;
                }

                count = max(count, dummy);
            }
        }

        return count;
    }
};