## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I take the first string as the initial prefix and compare it with each
of the remaining strings. Whenever the characters stop matching, the
prefix is shortened. This process continues until all strings have been
checked.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

I tested the solution with strings that have a common prefix and with
strings that have no common prefix. The solution also handles an empty
input correctly.