class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        
        int i=0,j=1,prod=nums[0],ans=0;
        if(nums[0]<k)
        ans=1;
        while(j<nums.size())
        {
            prod*=nums[j];
            while(i<=j && prod>=k)
            {
                prod/=nums[i];
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
};