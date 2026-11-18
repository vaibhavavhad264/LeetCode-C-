class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> basket;
        int l = 0;
        int maxFruits = 0;
        for(int r = 0; r < fruits.size(); r++){
            basket[fruits[r]]++;
            while(basket.size() > 2){
                if(basket[fruits[l]] == 1) basket.erase(fruits[l]);
                else basket[fruits[l]]--;
                l++;
            }
            maxFruits = max(maxFruits, r - l + 1);
        }
        return maxFruits;
    }
};