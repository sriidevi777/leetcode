class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int b=0;
        int c=0;
        for(int i=0; i<nums.size(); i++){
            b+=nums[i];
            if(b==0){
                c++;
            }
        }
        return c;
    }
};