class Solution(object):
    def maxProfit(self, prices):
        maxProfits = []
        min, maxprofit = prices[0], prices[-1]
        for i in range(len(prices)):
            if min > prices[i]:
                min = prices[i]
                maxprofit = 0
            if maxprofit < prices[i]:
                maxprofit = prices[i]
            maxProfits.append(maxprofit-min)
        maxProfit = max(maxProfits)
        print(maxProfits)
        if maxProfit <= 0:
            return 0
        return maxProfit


Solution.maxProfit(1, [3, 8, 1, 4, 7, 5])
