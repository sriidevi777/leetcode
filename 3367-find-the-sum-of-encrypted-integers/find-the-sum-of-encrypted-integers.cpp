class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(auto num: nums){
            int t=0, mx=0;
            unsigned long long int c=0;
            while(num){
                mx= max(mx, num%10);
                num/=10;
                c++;
            }
            while(c){
                t=t*10+mx;
                c--;
            }
            sum+=t;
        }
        return sum;
    }
};