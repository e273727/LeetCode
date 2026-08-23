class Solution {
public:
    int reverseBits(int n) {
        bitset<32> bit(n);
        string bitString = bit.to_string();
        reverse(bitString.begin(),bitString.end());
        int ans = stoi(bitString, nullptr, 2);
        return ans;        
    }
};