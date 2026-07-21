class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int i=0;
        int j=0;

        int start = 0;

        ans.push_back(matrix[i][j]);

        for(int m=0; m < min(row,col); m++){
            
            if(i==start){
                j++;
                while(j<col && i < row){
                    ans.push_back(matrix[i][j]);
                    j++;
                }
                j--;
            }
            if(j==col-1 && start != col){
                i++;
                while(i<row ){
                    ans.push_back(matrix[i][j]);
                    i++;
                }
                i--;
            }
            if(i==row-1 && i != start){
                j--;
                while(j>=start){
                    ans.push_back(matrix[i][j]);
                    j--;
                }
                j++;
            }
            if(j==start && j != col-1){
                i--;
                while(i>start){
                    ans.push_back(matrix[i][j]);
                    i--;
                }
                i++;
            }

            col--;
            row--;
            start++;
        }
        
        return ans;
    }
};