class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        int last = n%10;
        return last+1;
    }
};