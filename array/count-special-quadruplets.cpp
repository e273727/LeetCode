class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int count = 0;
        for(int i =0; i<nums.size(); i++){
            for(int j =i+1; j<nums.size(); j++){
                for(int k =j+1; k<nums.size(); k++){
                    for(int n =0;n<nums.size(); n++){
                        if((nums[i]+nums[j]+nums[k]==nums[n])&& (n!=i)){
                            count++;
                        }
                    }
                }
            }
        }
        return count;       
    }
};