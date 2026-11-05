#include <iostream>
#include <vector>
using namespace std;

class Subsets {
public:
    // Fixed: Return by value instead of reference to a local variable
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs = {{}};
        for(int num : nums){
            int n = subs.size();
            for(int i = 0; i < n; i++){
                subs.push_back(subs[i]);
                subs.back().push_back(num);
            }
        }
        return subs;
    }
};

int main() {
    Subsets S1;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = S1.subsets(nums);  

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j < result[i].size() - 1) {
                cout << ", ";
            }
        }
        cout << "]";
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}