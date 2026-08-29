class Solution {
public:

    bool rotate(vector<vector<int>>& rotateMat, vector<vector<int>>& target, vector<vector<int>>& mat){
        int n =rotateMat.size();
        for(int i =0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                swap(rotateMat[i][j],rotateMat[j][i]);
            }
        }
        for(auto& row:rotateMat){
            reverse(row.begin(),row.end());
        }
        if(rotateMat == target){
            return true;
        }
        return false;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        bool answer;
        int n = mat.size();
        vector<vector<int>> rotateMat(n,vector<int>(n,0));
        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                rotateMat[i][j] = mat[i][j];
            }
        }
        for(int i = 0; i<4; i++){
            answer = rotate(rotateMat, target, mat);
            if(answer == true){
                return true;
            }
        }
        return false;        
    }
};