class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int m=0;
        for(auto n :nums){   
            if(n==1){
                m++;
                c=max(c,m);
            }
            else if(n==0){
                
                m=0;
            }
        }
        return c;
    }
};