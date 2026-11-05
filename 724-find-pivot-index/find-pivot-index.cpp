class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int sm=0;
            for(int j=0; j<nums.size(); j++){
                if(j<i){
                    sm+=nums[j];
                }
                else if(j>i){
                    sm-=nums[j];
                }              
            }
            if(sm==0){
                return i;
            }
        }
        return -1;
    }
};