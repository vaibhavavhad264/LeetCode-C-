#include<iostream>
#include<vector>
using namespace std;


/*
                                                    370. Range Addition (Medium)

You are given an integer length and an array updates where updates[i] = [startIdx_i, endIdx_i, inc_i].
You have an array arr of length length with all zeros, and you have some operations to apply on arr. In the i-th operation, you should increment all the 
elements arr[startIdx_i], arr[startIdx_i + 1], ..., arr[endIdx_i] by inc_i. Return arr after applying all the updates.
*/
class Solution{
public:
    vector<int> rangeAddition(vector<vector<int>>& updates, int length){
        vector<int> arr(length, 0);

        for(auto update : updates){
            int i = update[0];
            int j = update[1];
            int inc = update[2];

            arr[i] += inc;
            if(j + 1 < length) arr[j + 1] -= inc;
        }
        for(int i = 1; i < length; i++) arr[i] += arr[i - 1];
        return arr;
    }
};

int main(){

    Solution s1;
    vector<vector<int>> arr = {{1, 3, 2}, {2, 4, 3}, {0, 2, -2}};
    int length = 5;
    vector<int> result = s1.rangeAddition(arr, length);
    for(int i = 0; i < length; i++){
        cout << result[i] << ", ";
    }
    return 0;
}