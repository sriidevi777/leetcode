class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        int digit = 0;
        while (n){
            digit = n % 10;
            n = n/10;
            sum += digit;
            prod *= digit;
        }
        int res = prod - sum;
        return res;
        
    }
};
