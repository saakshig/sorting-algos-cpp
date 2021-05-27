class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> weakRows;
        for(int i = 0; i < mat[0].size(); i++){
            for(int j = 0; j < mat.size(); j++){
                if(mat[j][i] == 0 && (i == 0 || mat[j][i - 1] == 1)){
                    weakRows.push_back(j);
                    k--;
                }

                if(!k) break;
            }
            if(!k) break;
        }
        int i = 0;
        while(k > 0) {
            if(mat[i][mat[0].size() - 1] == 1){
                weakRows.push_back(i);
                k--;
            }
            i++;
        }
        return weakRows;
    }
};