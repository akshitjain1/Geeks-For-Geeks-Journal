class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j, int r, int c) {
        if (i < 0 || i >= r || j < 0 || j >= c || grid[i][j] == 'W') {
            return;
        }
        grid[i][j] = 'W';
        dfs(grid, i, j + 1, r, c);
        dfs(grid, i, j - 1, r, c);
        dfs(grid, i + 1, j, r, c);
        dfs(grid, i - 1, j, r, c);
        dfs(grid, i + 1, j + 1, r, c);
        dfs(grid, i + 1, j - 1, r, c);
        dfs(grid, i - 1, j + 1, r, c);
        dfs(grid, i - 1, j - 1, r, c);
    }

    int countIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        if (r == 0) {
            return 0;
        }
        int c = grid[0].size();
        if (c == 0) {
            return 0;
        }

        int islandCount = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 'L') {
                    dfs(grid, i, j, r, c);
                    islandCount++;
                }
            }
        }
        return islandCount;
    }
};