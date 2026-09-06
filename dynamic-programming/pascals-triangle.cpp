class Solution {
public:
    vector<int> gRow(int r){
        vector<int> tempList;
        long long num = 1;
        tempList.push_back(num);
        for(int j =1; j<r; j++){
            num = num*(r-j);
            num = num/j;
            tempList.push_back(num);                
        }
        return tempList;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i<=numRows; i++){
            vector<int> temp = gRow(i);
            ans.push_back(temp);            
        }
        return ans;      
    }
};