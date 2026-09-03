class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // ig a guy said this in this question that what if the smallest number is odd or even, i feel is smallest = odd,then whole array odd, else even
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        if(nums1[0]%2==0){
            for(int num:nums1){
                if(num%2!=0){
                    return false;
                }
            }
            return true;
        }
        else if(nums1[0]%2!=0){
            for(int num: nums1){
                if(num%2==0){
                    num-=nums1[0];
                }
            }
            return true;
        }
        return false;        
    }
};