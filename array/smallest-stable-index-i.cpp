class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int max = nums[0];
        int minStable = -1;
        for(int i =0; i<nums.size(); i++){
            int min = nums[i];
            if(max<nums[i]){
                max = nums[i];
                // cout<<max<<"\n";
            }
            for(int j = i; j<nums.size(); j++){
                if(min>nums[j]){
                    min = nums[j];
                    // cout<<"min"<<min<<"\n";
                }
            }
            int diff = max-min;
            if(diff<=k){
                minStable = i;
            }
        }
        return minStable;        
    }
};