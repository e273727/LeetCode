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
        // for(int i =0; i<nums.size(); i++){
        //     set<int> hashset;
        //     for(int j = i+1;j<nums.size(); j++)
        //     {
        //         int third = -(nums[i]+nums[j]);
        //         if(hashset.find(third)!=hashset.end()){
        //             vector<int> temp = {nums[i], nums[j], third};
        //             sort(temp.begin(), temp.end());
        //             lol.insert(temp);
        //         }
        //         hashset.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>> answer(lol.begin(), lol.end());
        // return answer;

        // the more optimal approach for this one is using the tow pointer
vector<vector<int>> ans;

sort(nums.begin(), nums.end());

for (int i = 0; i < nums.size(); i++) {

    if (i > 0 && nums[i] == nums[i - 1])
        continue;

    int j = i + 1;
    int k = nums.size() - 1;

    while (j < k) {

        int sum = nums[i] + nums[j] + nums[k];

        if (sum > 0) {
            k--;
        }
        else if (sum < 0) {
            j++;
        }
        else {
            vector<int> temp = {nums[i], nums[j], nums[k]};
            ans.push_back(temp);

            j++;
            k--;

            while (j < k && nums[j] == nums[j - 1])
                j++;

            while (j < k && nums[k] == nums[k + 1])
                k--;
        }
    }
}

return ans;
    }
};