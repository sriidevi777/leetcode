class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
         int min_val = INT_MAX;
    
         for (size_t i = 0; i < nums.size(); i += 2) {
            string merged_str = to_string(nums[i]) + to_string(nums[i + 1]);
            int merged_val=stoi(merged_str);
            min_val=min(min_val, merged_val);
        }
        
        return min_val;
    }
};
