class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = INT_MIN;
        int maxNum = 0;
        for(int i =0; i<prices.size(); i++){
            for(int j = i; j<prices.size(); j++){
                if(prices[j]-prices[i]>max && prices[j]-prices[i]>0){
                    max = prices[i]-prices[j];
                    maxNum = j;
                }
            }
        }
        return maxNum;       
    }
};