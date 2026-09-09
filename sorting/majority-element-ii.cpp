class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    //     vector<int> ls;
    //     int n = nums.size();
    //     int num = n/3;
    //     // cout<<ls.size();
    //     for(int i =0; i<n; i++){
    //         if(ls.size() == 0 || ls[0]!=nums[i]){
    //             int count  = 0;
    //             for(int j =0; j<n; j++){
    //                 if(nums[j] == nums[i]){
    //                     count++;
    //                 }
    //             }
    //             if(count>num){
    //                 ls.push_back(nums[i]);
    //             }
    //         }
    //         if(ls.size() == 2) break;            
    //     }
    //     return ls;       
    // }this was the optimal appraoch for it
    //  Btw generally thr core Idea of thsi problem is acutally is, we have to find the elements, which have occurencce more than [n/3] time ([]: floor function )
    //One more thing, there can be only max 2 elements with count of n/3 times.

    //  This was the Better approach using the HashMap,
    //     unordered_map<int, int> mpp;
    //     vector<int> answer;
    //     int n = nums.size();
    //     int m = (n/3)+1;
    //     for(int i =0;i <n; i++){
    //         mpp[nums[i]]++;
    //         if(mpp[nums[i]]==m){
    //             answer.push_back(nums[i]);
    //         }
    //         if(answer.size() == 2) break;
    //     }
    // return answer;
    int cnt1 = 0, cnt2 = 0;
    int n = nums.size();
    int el1 = INT_MIN;
    int el2 = INT_MIN;
    for(int i =0; i<n; i++){
        if(cnt1 == 0 && el2 != nums[i]){
            cnt1 = 1;
            el1=nums[i];
        }
        else if(cnt2 == 0 && el2 != nums[i]){
            cnt2 = 1;
            el2=nums[i];
        }
        else if(el1 == nums[i]) cnt1++;
        else if(el2 == nums[i]) cnt2++;
        else{
            cnt1--, cnt2--;
        }
    }
    cnt1 = 0, cnt2 = 0;
    vector<int> answer;
    for(int i =0; i<n; i++){
        if(el1 == nums[i])cnt1++;
        if(el2 == nums[i])cnt2++;
    }
    int mini = (n/3)+1;
    if(cnt1>=mini) answer.push_back(el1);
    if(cnt2>=mini) answer.push_back(el2);
    sort(answer.begin(), answer.end());
    return answer;
    }
};