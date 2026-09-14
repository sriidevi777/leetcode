class Solution(object):
    def maxProfit(self, prices):
        if len(prices) == 0:
             return 0
        else:
            profit = 0
            minprice = prices[0]
            for i in range(len(prices)):
                profit = max(prices[i] - minprice, profit)
                minprice = min(minprice, prices[i])
            return profit
