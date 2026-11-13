class Solution {
public:
    int minElement(vector<int>& nums) {
        int mn=nums[0];
        for(auto n: nums){
            int s=0;
            while(n){
                s+=n%10;
                n/=10;
            }
            mn=min(mn,s);
        }
        return mn;
    }
};