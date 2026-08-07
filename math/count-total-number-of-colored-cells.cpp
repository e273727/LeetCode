class Solution {
public:
    long long coloredCells(int n) {
        long ans = 1;
        for(int i=0; i<n; i++){
            ans=ans+(1*(4*i));
        }
        return long(ans);       
    }
};