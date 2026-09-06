class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> cnt(k);
        cnt[0] = 1;

        int ans = 0;
        int suma = 0;
        for (auto& el: nums) {
            suma = ((suma + el) % k + k) % k;
            ans += cnt[suma];
            ++cnt[suma];
        }

        return ans;
    }
};