class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
    //     vector<vector<int>> answer(n,vector<int>(n,0));
    //     for(int i = 0;i<n; i++){
    //         for(int j =0; j<n; j++){
    //             answer[j][n-1-i] = matrix[i][j];
    //         }
    //     }        
    //     for(int i = 0;i<n; i++){
    //         for(int j =0; j<n; j++){
    //             matrix[i][j] = answer[i][j];
    //         }
    //     }        
    // }
    // By the Transposing matrix
        for(int i =0; i<n; i++){
            for(int j =i; j<n; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for(auto& row: matrix){
            reverse(row.begin(), row.end());
        }
    }
};