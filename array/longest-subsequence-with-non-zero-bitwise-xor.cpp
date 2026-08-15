class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        // we have to return output of the longest subsequence jisme xor zero na ho. 
        int xorSum = 0;
        int max = 0;
        int Prev_max = 0;
        int j =0;
        for(int i=0;i <nums.size(); i++){
            xorSum^=nums[i];
            if(xorSum == 0){
                j = i;
                Prev_max = max;
                max=0;
            }
            else if(xorSum !=0){
                max++;
            }
        }
        if (max>Prev_max){
            return max;
        }
        else{
            return Prev_max;
        }
        return -1;      
    }
};