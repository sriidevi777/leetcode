class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        map<int, int> f;

        for(auto num: nums){
            f[num]++;
        }
        
        for(auto num: nums){
            if(num%2==0 && f[num]==1){
                return num;
            }
        }
        return -1;

    }
};
