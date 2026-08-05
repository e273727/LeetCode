class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        for(int i = 0; i<numbers.size(); i++)
        {
            for(int j =1; j<numbers.size(); j++)
            {
                if ((numbers.at(i)+numbers.at(j) == target)&&(numbers.at(i)!=numbers.at(j)))
                {
                    ans.emplace_back(i+1);
                    ans.emplace_back(j+1);
                    return ans;
                }
            }
        }
        return {};
    }
};