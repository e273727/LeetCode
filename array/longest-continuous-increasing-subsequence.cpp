class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int longest = 1;
        int count = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                count++;
            }
            else {
                count = 1;
            }

            longest = max(longest, count);
        }

        return longest;
    }
};