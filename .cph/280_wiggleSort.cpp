#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

class Solution{
public:
    void wiggle_sort(vector<int>& nums){
        priority_queue<int> pq(nums.begin(), nums.end());
        int n = nums.size();

        for(int i = 1; i < n; i += 2){
            nums[i] = pq.top();
            pq.pop();
        }
        for(int i = 0; i < n; i += 2){
            nums[i] = pq.top();
            pq.pop();
        }
    }

};

int main(){
    Solution s1;
    vector<int> arr = {1, 5, 1, 1, 6, 4};
    cout << "Before Sort : ";
    for(int i = 0; i < arr.size(); i++) cout << arr[i];
    s1.wiggle_sort(arr);
    cout << endl << "After Sort : ";
    for(int i = 0; i < arr.size(); i++) cout << arr[i];
}
