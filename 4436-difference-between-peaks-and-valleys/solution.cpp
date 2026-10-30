class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if((0<i) && (i<n-1) && (nums[i] > nums[i-1]) && (nums[i] > nums[i + 1])){
                ans+=nums[i];
            }
            else if((0<i) && (i<n-1) && (nums[i]<nums[i-1]) && (nums[i]<nums[i+1])){
                ans-=nums[i];
            } 
        }
        return ans;       
    }
};
