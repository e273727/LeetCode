class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int len1 = abs(rec1[0]-rec1[2]);
        int len2 = abs(rec2[0]-rec2[2]);
        if(rec2[0]-rec1[0] <len1){
            return true;
        }
        return false;        
    }
};