class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = nums[0];
        int n = nums.size();
        int count = 0;
        for(int i =0; i<n i++){
            if(count == 0){
                j = i;
                element = nums[i]
            }
            else if(nums[i]!=nums[j]){
                count--;
            }
            else{
                count++;
            }
        }
        int count1 = 0;
        for(int i =0; i<n; i++){
            if(element == nums[i]){
                count1++;
            }
        }
        if(count1>n/2){
            return element;
        }
        return -1;        
    }
};