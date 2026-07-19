class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int row = mat.size();
        int col = mat[0].size();

        int i=0, j=0;
        ans.push_back(mat[i][j]);

        for(int m=0; m<max(row,col); m++){
            if(i==0 && j < col-1){
                j++;
                while(j>=0 && i < row){
                    ans.push_back(mat[i][j]);
                    i++;
                    j--;
                }
                i--;
                j++;
            }
            if(j==0 && i < row-1){
                i++;
                while(i>=0 && j < col ){
                    ans.push_back(mat[i][j]);
                    i--;
                    j++;
                }
                i++;
                j--;
            }
            if(i == row-1){
                j++;
                while(i>=0 && j<col){
                    ans.push_back(mat[i][j]);
                    i--;
                    j++;
                }
                i++;
                j--;
            }
            if(j == col-1){
                i++;
                while(i<row && j>=0){
                    ans.push_back(mat[i][j]);
                    i++;
                    j--;
                }
                i--;
                j++;
            }
        }
        return ans;
    }       
};