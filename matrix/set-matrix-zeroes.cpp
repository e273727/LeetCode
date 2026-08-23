class Solution {
public:
    void markRow(vector<vector<int>>& matrix, int i){
        for(int j = 0; j<matrix[0].size(); j++){
            if(matrix[i][j]!=0){
                matrix[i][j] = -5;
            }
        }
    };
    void markColumn(vector<vector<int>>& matrix, int j){
        for(int i =0; i<matrix.size(); i++){
            if(matrix[i][j]!=0){
                matrix[i][j] = -5;
            }
        }
    };
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i = 0; i<matrix.size(); i++){
            for(int j =0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    markRow(matrix, i);
                    markColumn(matrix, j);
                }
            }
        }        
        for(int i = 0; i<matrix.size(); i++){
            for(int j =0; j<matrix[0].size(); j++){
                if(matrix[i][j] == -5){
                    matrix[i][j] = 0;
                }
            }
        }        
    }
};