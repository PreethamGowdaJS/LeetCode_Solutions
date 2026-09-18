# Valid Parentheses

## Problem

Given a string `s` containing just the characters `(`, `)`, `{`, `}`, `[` and `]`, determine if the input string is valid.

A valid string must have every opening bracket closed by the same type of bracket and in the correct order.

## Difficulty

Easy

## LeetCode Link

https://leetcode.com/problems/valid-parentheses/

## Approach

Use a stack to keep track of opening brackets.

1. Traverse the string from left to right.
2. If the character is an opening bracket `(`, `{`, or `[`, push it onto the stack.
3. If it is a closing bracket, check whether the stack is empty.
4. Compare the closing bracket with the top opening bracket.
5. If they match, remove the opening bracket from the stack.
6. If they do not match, return `false`.
7. At the end, the stack must be empty for the string to be valid.

## Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

## Notes

A stack follows the Last In, First Out (LIFO) principle, which makes it suitable for matching nested brackets.
