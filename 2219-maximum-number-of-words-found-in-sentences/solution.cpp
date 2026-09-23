class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxSum = 0;
        for(auto& it : sentences){
            int words= 1;
            for(auto &i : it){
                if(i==' ') words++;
            }
            maxSum = max(maxSum,words);
        }
        return maxSum;
    }
};
