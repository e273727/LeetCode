class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right = 0;
        int left = numbers.size()-1;
        vector<int> ans(2,0);
        while (right<left){
            int sum = numbers.at(right)+numbers.at(left);
            if (sum == target){
                ans.at(0) = right+1;
                ans.at(1) = left+1;
                return ans;
            }
            else if(sum>target){
                left--;
            }
            else{
                right++;
            }
        }
        return {};        
    }
};