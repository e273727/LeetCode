class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int longest = 1;
        int count = 1;
        int j= 1;
        int i =0;
        while(i<nums.size() && j<nums.size()){
            if(nums.at(i)<nums.at(j)){
                count++;
                i++;
                j++;
            }
            else if(nums.at(i)>nums.at(j)){
                count = 1;
                i++;
                j++;
            }
            else{
                i++;
                continue;
            }
            longest = max(longest,count);
        }
        return longest;      
    }
};