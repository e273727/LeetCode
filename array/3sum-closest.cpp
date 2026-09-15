class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        set<int> s;
        for(int i =0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                for(int k = j+1; k<nums.size(); k++){
                    int sum = nums[i]+nums[j]+nums[k];
                    s.insert(sum);
                }
            }
        }
        if (s.empty()) return -1;

        auto it = s.lower_bound(target);

        if (it == s.begin()) return *it;
        if (it == s.end()) return *prev(it);

        int val1 = *it;
        int val2 = *prev(it);
        return (abs(val1 - target) < abs(val2 - target)) ? val1 : val2;
    }
};