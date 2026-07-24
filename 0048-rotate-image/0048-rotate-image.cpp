class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int row = 0;

        for(int i=0; i < matrix.size(); i++){
            for(int j = row; j < matrix.size(); j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            row++;
        }

        for(int i=0; i < matrix.size(); i++){
            int start = 0;
            int end = matrix.size()-1;
            while(start < end){
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }

        
        
    }
};