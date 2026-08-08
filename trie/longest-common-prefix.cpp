class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        for (int i = 0; i < strs[0].size(); i++) {

            char current = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {

                // Character doesn't match
                // OR this string is too short
                if (i >= strs[j].size() || strs[j][i] != current) {
                    return ans;
                }
            }

            ans += current;
        }

        return ans;
    }
};