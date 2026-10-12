def max_profit(prices):
    min_price = float("inf")
    profit = 0

    for price in prices:
        min_price = min(min_price, price)
        profit = max(profit, price - min_price)

    return profit

print(max_profit([7, 1, 5, 3, 6, 4]))