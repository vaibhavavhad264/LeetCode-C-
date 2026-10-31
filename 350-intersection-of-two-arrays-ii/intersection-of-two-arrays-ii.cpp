class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> counting;
        vector<int> ans;
        
        for(int num : nums1){
            counting[num]++;
        }

        for(int num : nums2){
            if(counting[num] > 0){
                ans.push_back(num);
                counting[num]--;
            }
        }

        return ans;
    }
};