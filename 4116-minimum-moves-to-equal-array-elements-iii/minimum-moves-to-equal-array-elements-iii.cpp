class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves=0;
        int mxx=nums[0];
        for(auto num: nums){
            mxx= max(num,mxx);
        }
        for(auto num: nums){
            moves+=mxx-num;
        }
        return moves;
    }
};