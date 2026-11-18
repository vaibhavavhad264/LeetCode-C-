class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> bucket;
        int l = 0;
        int maxFruits = 0;

        for(int r = 0; r < fruits.size(); r++){
            bucket[fruits[r]]++;
            while(bucket.size() > 2){
                if(bucket[fruits[l]] == 1) bucket.erase(fruits[l]);
                else bucket[fruits[l]]--;
                l++;
            }
            maxFruits = max(maxFruits, r - l + 1);
        }
        return maxFruits;
    }
};