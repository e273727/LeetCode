class Solution {
public:
    int digitProduct(int n){
        int product = 1;
        while(n!=0){
            int digit = n%10;
            product*=digit;
            n/=10;            
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        int digit;
        while (n<=100){
            int product = digitProduct(n);
            if(product%t == 0){
                return n;
            }
            else{
                n++;
            }
        }
        return -1;        
    }
};