# Binary Search

## Problem

Given a sorted array of integers `nums` and an integer `target`, return the index of `target` if it exists in the array. Otherwise, return `-1`.

## Difficulty

Easy

## LeetCode Link

https://leetcode.com/problems/binary-search/

## Approach

Binary Search is used because the array is sorted.

1. Set `left` to the first index and `right` to the last index.
2. Find the middle index.
3. If the middle element is equal to the target, return its index.
4. If the middle element is smaller than the target, search in the right half.
5. Otherwise, search in the left half.
6. If the target is not found, return `-1`.

## Complexity

* **Time Complexity:** O(log n)
* **Space Complexity:** O(1)

## Notes

The array must be sorted for Binary Search to work correctly.
