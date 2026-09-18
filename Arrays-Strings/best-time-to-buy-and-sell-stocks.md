```markdown
## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I keep track of the minimum stock price seen so far while going through
the array. For each price, I calculate the possible profit by selling
at that price and update the maximum profit if it is greater.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the solution with a case where a profit is possible and a case
where the stock price continuously decreases. When the prices only
decrease, the maximum profit remains zero.
```
