class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        int last = n%100;
        return last+1;
    }
};