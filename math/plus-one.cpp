class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = sizeof(digits) / sizeof(digits[0]); // Calculates array length
    
        int result = 0;
        for (int i = 0; i < digits.size(); i++) {
            result = result * 10 + digits[i]; // Shifts digits left and adds the next one
        }
        result+=1;
        vector<int> answer;
        while(result>0){
            int ans =result%10;
            answer.emplace_back(ans);
            result/=10;
        }
        reverse(answer.begin(),answer.end());
        return answer;        
    }
};