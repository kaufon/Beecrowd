class Solution(object):
    def maxProfit(self, prices):
        profit = 0
        profits = []
        buy = prices[0]
        for index, sell in enumerate(prices[1:]):
            if sell > buy:
                profit = sell-buy
                profits.append(profit)
                buy = prices[index+1]
            else:
                buy = sell
        return sum(profits)


Solution.maxProfit(1, [7, 1, 5, 3, 6, 4])
