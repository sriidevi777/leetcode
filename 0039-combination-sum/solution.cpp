
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;

    void solve( vector<int>& a,  int start,  int target ) {
        
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        

        for (int i = start; i < a.size(); i++) {
            if (a[i] > target)
                continue;

            curr.push_back(a[i]);
            
            solve(a, i, target - a[i]);

            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum( vector<int>& candidates, int target ) {
            
        sort(candidates.begin(), candidates.end());
        solve(candidates, 0, target);
        
        return ans;
    }
};

