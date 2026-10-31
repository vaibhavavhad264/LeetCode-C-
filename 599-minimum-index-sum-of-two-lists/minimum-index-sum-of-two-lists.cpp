class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> result;
        unordered_map<string, int> mp;
        int min_sum = INT_MAX;

        for(int i = 0; i < list1.size(); i++){
            mp[list1[i]] = i;
        }

        for(int i = 0; i < list2.size(); i++){
            if(mp.count(list2[i]) != 0){
                int sum = mp[list2[i]] + i;

                if(sum < min_sum){
                    min_sum = sum;
                    result.clear();
                    result.push_back(list2[i]);
                }
                else if(sum == min_sum){
                    result.push_back(list2[i]);
                }
            } 
        }
        return result;
    }
};