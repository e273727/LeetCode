class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        // if(n == 0){
        //     return false;
        // }
        int num = n;
        while(n>0){
            sum+=n%10;
            product*=n%10;
            n=n/10;
        }
        // cout<<sum<<" "<<product<<endl;
        int total = sum+product;
        // cout<<total<<endl;
        if(num%total==0){
            return true;
        }
        return false;
        
    }
};