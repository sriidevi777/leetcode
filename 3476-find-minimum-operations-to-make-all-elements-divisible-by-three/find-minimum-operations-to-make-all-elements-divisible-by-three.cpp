class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;
        for(auto n:nums){
            if(n%3!=0){
                c++;
            }
        }
        return c;
    }
};