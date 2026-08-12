class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> minus;
        vector<int> plus;
        int j =0;
        int k =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                minus.push_back(nums[i]);
                cout<<"minus wale: "<<minus[j]<<endl;;
                j++;
            }
            else{
                plus.push_back(nums[i]);
                cout<<"plus wale: "<<plus[k]<<endl;;
                k++;
            }
        }
        j =0;
        k =0;
        for(int i =1;i<nums.size()+1;i++){
            if(i%2!=0){
                nums[i-1] = plus[j];
                j++;
            }
            else{
                nums[i-1] = minus[k];
                k++;
            }
        }
        return nums;        
    }
};