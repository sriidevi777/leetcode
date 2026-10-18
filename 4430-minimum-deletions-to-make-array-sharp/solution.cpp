class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int deletions = 0;
        if (nums.empty()) return 0;
        
        for (size_t i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                deletions++;
            }
        }
        
        return deletions;
    }
};
