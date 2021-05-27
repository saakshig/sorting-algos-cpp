class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c = 0, m = grid.size() - 1, n = 0;

        /*for(int i = m  - 1; i >= 0; i--){
            if(grid[i][n - 1] < 0) {

                for(int j = n - 1; j >= 0; j--){
                    if(grid[i][j] < 0)
                        c++;
                    else
                        break;
                }
            }
            else
                break;
        }*/
        while(m >= 0 && n < grid[m].size()){
            if(grid[m][n] < 0){
                c = c + grid[m].size() - n;
                m--;
            }
            else
                n++;
        }
        return c;
    }
};