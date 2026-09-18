```markdown
## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used an integer array of size 26 to count the frequency of each
lowercase letter. For the first string, the character count is
increased, and for the second string, it is decreased. If all the
counts become zero, both strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the program with one valid anagram and one case where the
strings are not anagrams. I also checked that strings with different
lengths are handled correctly.
```
