class Solution {
public:

    bool rotate( vector<vector<int>>& target, vector<vector<int>>& mat){
        int n =mat.size();
        for(int i =0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(auto& row:mat){
            reverse(row.begin(),row.end());
        }
        if(mat == target){
            return true;
        }
        return false;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        bool answer;
        int n = mat.size();
        for(int i = 0; i<4; i++){
            answer = rotate(target, mat);
            if(answer == true){
                return true;
            }
        }
        return false;        
    }
};