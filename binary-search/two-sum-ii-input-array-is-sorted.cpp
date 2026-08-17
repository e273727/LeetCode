class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right = numbers.size()-1;
        int left = 0;
        vector<int> ans(2,0);
        while (left<right){
            int sum = numbers.at(right)+numbers.at(left);
            if(sum == target){
                ans[0]=left+1;
                ans[1]=right+1;
                return ans; 
            }
            else if(target<numbers[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return {};       
    }
};