#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> printGroupAnagrams(vector<string> arr){
    vector<vector<string>> ans;
    map<string, vector<string>> t_map;

    for(int i = 0; i < arr.size(); i++){
        string tempo = arr[i];
        sort(tempo.begin(), tempo.end());
        t_map[tempo].push_back(arr[i]);
    }

    for(auto i : t_map){
        ans.push_back(i.second);
    }
    return ans;
}

int main(){
    vector<string> t1 = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result = printGroupAnagrams(t1);
    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[i].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}