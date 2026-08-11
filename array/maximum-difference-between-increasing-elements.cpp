class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0];
        int maxDiff = -2;
        for(int i =1; i<nums.size(); i++){
            int diff = nums[i]-mini;
            maxDiff = max(maxDiff,diff);
            mini = min(mini,nums[i]);
        }
        if(maxDiff>0){
            return maxDiff;
        }
        else{
            return -1;
        }
    }
};