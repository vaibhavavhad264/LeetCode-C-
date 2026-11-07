#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:

    vector<vector<int>> transpose(vector<vector<int>>& matrix){
        vector<vector<int>> result(matrix[0].size(), vector<int> (matrix.size()));
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                result[j][i] = matrix[i][j];
            }
        }
        return result;
    }

    int equalPairs(vector<vector<int>>& grid){
        int c = 0;
        int n = grid.size();
        vector<vector<int>> trans = transpose(grid);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i] == trans[j]) c++;
            }
        }
        return c;
    }
};

int main(){
    
    Solution s1;
    // vector<vector<int>> grid = {{3,2,1},{1,7,6},{2,7,7}};
    vector<vector<int>> grid = {{3,1,2,2},{1,4,4,5},{2,4,2,2},{2,4,2,2}};
    cout << s1.equalPairs(grid) << endl;
    return 0;
}