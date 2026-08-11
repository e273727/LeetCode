class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff = -1;
        for (int i =0; i<nums.size(); i++){
            for(int j =i; j<nums.size(); j++){
                if(i<j && nums.at(i)<nums.at(j)){
                    int Diff = nums.at(j)-nums.at(i);
                    maxDiff = max(maxDiff, Diff);
                }
            }
        }
        return maxDiff;      
    }
};