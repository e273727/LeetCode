class Solution {
public:
    int countCommas(int n) {
        int count = 0;
        if(n<1000){
            return 0;
        }
        int digit = n;
        do {
        digit /= 10;
        ++count;
        } while (digit != 0);
        int power = pow(10,count-1);
        int second = n%power;
        return second+1;
    }
};