## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a nested loop to check every possible pair of elements in the
array. When the sum of two elements matches the target, their indices
are returned.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

I tested the program using a normal example and a case containing
duplicate values. The duplicate-value test helped verify that two
different indices are correctly returned.