class Solution {
public:
    int countCommas(int n) {
        int count = 0;
        if(n<1000){
            return 0;
        }
        int rem = n-1000;
        return rem+1;
    }
};