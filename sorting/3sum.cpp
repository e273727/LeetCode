class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // trying it do with the help of the brute force method, 
        set<vector<int>> lol;
        // for(int i=0;i<nums.size(); i++){
        //     for(int j = i+1; j<nums.size(); j++){
        //         for(int k = j+1; k<nums.size(); k++){
        //             if(nums[i]+nums[j]+nums[k] == 0){
        //                 vector<int> temp = {nums[i], nums[j], nums[k]};
        //                 sort(temp.begin(),temp.end());
        //                 lol.insert(temp);
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>> answer(lol.begin(), lol.end());
        // return answer; 

        //Better Approach: using hashmap and reducing the 3rd loop 
        for(int i =0; i<nums.size(); i++){
            set<int> hashset;
            for(int j = i+1;j<nums.size(); j++)
            {
                int third = -(nums[i]+nums[j]);
                if(hashset.find(third)!=hashset.end()){
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    lol.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> answer(lol.begin(), lol.end());
        return answer;
    }
};