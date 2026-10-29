class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int, int> mpp;
        if (trust.size()==0 && n==1){
            return 1;
        }
        for (auto i: trust){
            mpp[i[0]]--;
            mpp[i[1]]++;
        }
        for (auto i: mpp){
            if (i.second==(n-1)){
                return i.first;
            }
        }
        return -1;
    }
};
