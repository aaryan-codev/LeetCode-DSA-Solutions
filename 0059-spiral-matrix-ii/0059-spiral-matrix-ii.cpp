class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n,0));
        
        int start = 1;
        int loop = 0;
        int i=0;
        int j=0;
        
        matrix[i][j] = start;

        for(int m=0; m<n; m++){
            if(i==loop){
                j++;
                while(j<n){
                    matrix[i][j] = start + 1;
                    start++;
                    j++;
                }
                j--;
            } 
            if(start == n*n){
                break;
            }  
            if(j == n-1){
                i++;
                while(i<n){
                    matrix[i][j] = start + 1;
                    start++;
                    i++;
                }
                i--;
            }
            if(start == n*n){
                break;
            }
            if(i == n-1){
                j--;
                while(j>=loop){
                    matrix[i][j] = start + 1;
                    start++;
                    j--;
                }
                j++;
            }
            if(start == n*n){
                break;
            }
            if(j == loop){
                i--;
                while(i > loop){
                    matrix[i][j] = start + 1;
                    start++;
                    i--;
                }
                i++;
            }
            if(start == n*n){
                break;
            }
            loop++;
            n--;
        }
        return matrix;
    }
};