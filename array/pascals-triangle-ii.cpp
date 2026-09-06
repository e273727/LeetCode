class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long num = 1;
        vector<int> temp;
        temp.push_back(num);
        for(int i =1; i<rowIndex+1; i++){
            num = num*(rowIndex+1-i);
            num = num/i;
            temp.push_back(num);
        }
        return temp;        
    }
};