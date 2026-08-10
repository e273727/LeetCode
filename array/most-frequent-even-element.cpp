class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int el;
        int prev;
        int count =0;
        for(int i = 0;i<nums.size();i++){
            if(count == 0 && nums.at(i)%2 == 0){
                count++;
                el = nums.at(i);
            }
            else if(nums.at(i)%2!=0){
                continue;
            }
            else if(nums.at(i) == el){
                count++;
            }
            else{
                count--;
                if(count == 0){
                    prev = el;
                }
            }
        }
        if(prev<el){
            return prev;
        }
        else{
            return el;
        }
        return -1;
    }
};