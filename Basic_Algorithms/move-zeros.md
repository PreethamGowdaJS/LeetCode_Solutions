# Move Zeroes

## Problem

Given an integer array `nums`, move all `0's` to the end of it while maintaining the relative order of the non-zero elements.

The operation must be done in-place without making a copy of the array.

## Difficulty

Easy

## LeetCode Link

https://leetcode.com/problems/move-zeroes/

## Approach

Use an `index` variable to keep track of the position where the next non-zero element should be placed.

1. Traverse the array from left to right.
2. Whenever a non-zero element is found, place it at `index`.
3. Increment `index`.
4. After all non-zero elements are placed, fill the remaining positions with `0`.

This keeps all non-zero elements in their original relative order.

## Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

## Notes

The array is modified in-place.
No additional array is used.
