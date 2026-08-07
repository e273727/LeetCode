class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans(2,0);
        ans.at(0) = celsius+273.15;
        ans.at(1) = (celsius*1.80)+32.00;
        return ans;        
    }
};