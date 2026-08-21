class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int longest = 1;
        int count = 1;
        int j= 1;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]<nums[j]){
                count++;
                j++;
            }
            else if(nums[i]>nums[j]){
                count = 1;
                j++;
            }
            else{
                continue;
            }
            longest = max(longest,count);
        }
        return longest;      
    }
};