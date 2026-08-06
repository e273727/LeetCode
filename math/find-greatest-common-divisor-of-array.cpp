class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = nums.at(0);
        int max = nums.at(0);
        for (int i = 1; i<nums.size();i++){
            if(min>nums.at(i)){
                min = nums.at(i);
            }
            else if(max<nums.at(i)){
                max = nums.at(i);
            }
        }
        while (max%min !=0){
            int r = max%min;
            max = min;
            min = r;
        }
        return min;        
    }
};