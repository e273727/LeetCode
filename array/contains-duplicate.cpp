class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(int i =1; i<nums.size(); i++){
        //     if(nums[i] == nums[i-1]){
        //         return true;
        //     }
        // }
        // return false;       
        // by the help of the sorting is the better appraoch, with the hashmap the approach will be much better ig
        unordered_set<int> map;
        for(int num: nums){
            if(map.count(num)>0){
                return true;
            }
            map.insert(num);
        }
        return false;
    }
};