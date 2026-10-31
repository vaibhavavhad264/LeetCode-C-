#include<bits/stdc++.h>

using namespace std;

int minRoomsRequired(vector<vector<int>> &arr){
    int ans = 0;
    int count = 0;

    map<int, int> t_map;
    for(auto i : arr){
        int start = i[0];
        int end = i[1];

        t_map[start]++;
        t_map[end]--;
    }

    for(auto i : t_map){
        count += i.second;
        ans = max(ans, count);
    }
    return ans;
}

int main(){
    vector<vector<int>> round1 = {{0, 30}, {5, 10}, {15, 20}};
    vector<vector<int>> round2 = {{0, 10}, {10, 20}, {20, 30}};
    cout << minRoomsRequired(round1) << endl;
    cout << minRoomsRequired(round2) << endl;


}