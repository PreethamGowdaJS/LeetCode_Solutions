# Reverse Linked List

## Problem

Given the head of a singly linked list, reverse the list and return the reversed list.

## Difficulty

Easy

## LeetCode Link

https://leetcode.com/problems/reverse-linked-list/

## Approach

Use three pointers: `prev`, `current`, and `next`.

1. Set `prev` to `nullptr`.
2. Set `current` to the head of the list.
3. Store the next node in `next`.
4. Change `current->next` to point to `prev`.
5. Move `prev` and `current` one position forward.
6. Continue until `current` becomes `nullptr`.
7. Return `prev` as the new head.

## Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

## Notes

The linked list is reversed in-place without creating a new linked list.
