class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> minus;
        vector<int> plus;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                minus.push_back(nums[i]);
            }
            else{
                plus.push_back(nums[i]);
            }
        }
        int j =0;
        int k =0;
        for(int i =0;i<nums.size();i++){
            if(i%2!=0){
                nums[i] == minus[j];
                j++;
            }
            else{
                nums[i] == plus[k];
                k++;
            }
        }
        return nums;        
    }
};