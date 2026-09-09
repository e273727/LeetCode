class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    //     vector<int> ls;
    //     int n = nums.size();
    //     int num = n/3;
    //     // cout<<ls.size();
    //     for(int i =0; i<n; i++){
    //         if(ls.size() == 0 || ls[0]!=nums[i]){
    //             int count  = 0;
    //             for(int j =0; j<n; j++){
    //                 if(nums[j] == nums[i]){
    //                     count++;
    //                 }
    //             }
    //             if(count>num){
    //                 ls.push_back(nums[i]);
    //             }
    //         }
    //         if(ls.size() == 2) break;            
    //     }
    //     return ls;       
    // }this was the optimal appraoch for it
        unordered_map<int, int> mpp;
        vector<int> answer;
        int n = nums.size();
        int m = (n/3)+1;
        for(int i =0;i <n; i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==m){
                answer.push_back(nums[i]);
            }
        }
    return answer;
    }
};