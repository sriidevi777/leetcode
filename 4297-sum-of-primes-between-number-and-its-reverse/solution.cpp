class Solution {
public:
    int reverse(int n) {
        int reverse = 0;
        while (n > 0) {
            int temp = n % 10;
            reverse = reverse * 10 + temp;
            n /= 10;
        }
        return reverse;
    }

    bool isPrime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    int sumOfPrimesInRange(int n) {
        int r = reverse(n);

        int low = min(n, r), high= max(n, r);
        int ans = 0;
        for (int i = low; i <= high; i++) {
            if(isPrime(i)) ans += i;
        }
        return ans;
    }
};
