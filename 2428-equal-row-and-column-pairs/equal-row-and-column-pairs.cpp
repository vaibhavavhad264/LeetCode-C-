class Solution {
public:

    vector<vector<int>> transpose(vector<vector<int>>& matrix){
        int n = matrix.size();
        vector<vector<int>> trans(matrix[0].size(), vector<int>(matrix.size()));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                trans[i][j] = matrix[j][i];
            }
        }
        return trans;
    }
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> g;
        int c = 0;
        g = transpose(grid);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i] == g[j]) c++;
            }
        }
        return c;
    }
};