class Solution {
    int INF = 2147483647;
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int> > t;
        for(int i = 0;i<grid.size();i++){
            for(int j =0;j<grid[i].size();j++){
                if(grid[i][j] == 0){
                    t.push(make_pair(i,j));
                }
                
            }
        }
        int dRow[] = {-1, 1, 0, 0};
        int dCol[] = {0, 0, -1, 1};
        while(!t.empty()){
            auto [r,c] = t.front();
            t.pop();
            
            for(int i=0;i<4;i++){
                int neighborRow = r + dRow[i];
                int neighborCol = c + dCol[i];
                if(neighborRow >= 0 && neighborRow < grid.size() && neighborCol >= 0 && neighborCol < grid[0].size()){
                    if(grid[neighborRow][neighborCol] == INF){
                        grid[neighborRow][neighborCol] = grid[r][c] + 1;
                        t.push(make_pair(neighborRow,neighborCol));
                    }
                }
            }
        }
    }
};
