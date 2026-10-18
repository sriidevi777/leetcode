class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int r = 0, c = 0;
        
        std::set<std::pair<int, int>> visited;
        visited.insert({r, c});
        
        while (true) {
            char move = grid[r][c];
            int next_r = r;
            int next_c = c;
            
            if (move == 'L') next_c--;
            else if (move == 'R') next_c++;
            else if (move == 'U') next_r--;
            else if (move == 'D') next_r++;
            
            if (next_r >= 0 && next_r < m && next_c >= 0 && next_c < n && visited.find({next_r, next_c}) == visited.end()) {
                
                r = next_r;
                c = next_c;
                visited.insert({r, c});
            }
            
            else {
                break;
            }
        }
        
        return {r, c};
    }
};
