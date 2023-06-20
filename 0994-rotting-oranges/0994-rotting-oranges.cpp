class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        if (grid.empty()) return 0;
        int m = grid.size();
        int n = grid[0].size();
        
        queue<pair<int,int>> rotten;
        
        int total,days,fresh = 0;
        
        for(int i=0; i<m;i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]!=0) total++;
                if(grid[i][j]==1) fresh++;
                if(grid[i][j]==2) rotten.push({i,j});
            }
        }
        
        
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        
        int ans = -1;
        
        while(!rotten.empty()){
            int k = rotten.size();
            while(k--){
                int x = rotten.front().first, y = rotten.front().second;
                rotten.pop();
                for(int i=0; i<4;i++){
                    int nx = x + dx[i], ny = y + dy[i];
                    if(nx < 0 || ny < 0 || nx >= m || ny >= n || grid[nx][ny] != 1) continue;
                    grid[nx][ny] = 2;
                    rotten.push({nx,ny});
                    fresh--;
                }
            }
            
            ans++;
        }
        
        if(fresh>0) return -1; 
        if(ans==-1) return 0; 
        return ans;
    }
};