class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int k = n+m;
        cout<<k<<endl;
        double sum = 0;
        vector<int> nums3;
        for(int i =0; i<n; i++){
            nums3.push_back(nums1[i]);
        }
        int j =0;
        for(int i = m-1; i<k; i++){
            if(j<m){
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        sort(nums3.begin(), nums3.end());
        cout<<"Array"<<endl;
        // for(int i =0; i<k; i++){
        //     cout<<nums3[i]<<endl;
        // }
        int half = k/2;
        cout<<"Half: "<<half<<endl;
        if(k%2 == 0){
            sum = (nums3[half-1]+nums3[half])/2.0;
            cout<<"Sum: "<<sum;
        }
        else{
            sum = nums3[half];
        }
        return sum;       
    }
};