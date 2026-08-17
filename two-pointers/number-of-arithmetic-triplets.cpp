class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int i=0;
        int count = 0;
        for(i; i<nums.size();i++){
            for(int j =i; j<nums.size(); j++){
                for(int k =j; k<nums.size(); k++){
                    if((nums[j]-nums[i]==diff)&&(nums[k]-nums[j]==diff)){
                        count++;                        
                    }
                }
            }
        }
        return count;        
    }
};