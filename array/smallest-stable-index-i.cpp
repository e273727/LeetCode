class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // int max = nums[0];
        // int minStable = -1;
        // for(int i =0; i<nums.size(); i++){
        //     int min = nums[i];
        //     if(max<nums[i]){
        //         max = nums[i];
        //         // cout<<max<<"\n";
        //     }
        //     for(int j = i; j<nums.size(); j++){
        //         if(min>nums[j]){
        //             min = nums[j];
        //             // cout<<"min"<<min<<"\n";
        //         }
        //     }
        //     int diff = max-min;
        //     if(diff<=k){
        //         return i;
        //     }
        // }
        // return -1;   
        // this is was my method by the brute force method, ig there can be a better way, where we are able to keep track of max and min for every index, 
        int n = nums.size();
        vector<int> maxx(n), minn(n);
        maxx[0] = nums[0];
        minn[n - 1] = nums[n - 1];

        for (int i = 1; i < n; i++) {
            maxx[i] = max(maxx[i - 1], nums[i]);
        }

        for (int i = n - 2; i >= 0; i--) {
            minn[i] = min(minn[i + 1], nums[i]);
        }

        for (int i = 0; i < n; i++) {
            if (maxx[i] - minn[i] <= k)
                return i;
        }

        return -1;
        

    }
};