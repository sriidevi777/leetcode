class Solution {
public:
    bool threeFibonacciSum(int n) {
        if (n%2 != 0 || n<2){
            return false;
        }

        int target=n/2;
        long long a,b;
        a=0;
        b=1;

        while (b < target){
            long long next = a + b;
            a=b;
            b= next;
            
        }

        return b == target;
        
    }
};
