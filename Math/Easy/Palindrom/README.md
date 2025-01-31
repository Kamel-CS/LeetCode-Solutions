# Palindrome Number

## Problem Statement
Given an integer `x`, return `true` if `x` is a **palindrome**, and `false` otherwise.

**For the full problem statement, examples, and constraints, visit:**
[LeetCode Problem Link](https://leetcode.com/problems/palindrome-number/description/)

## Approach
- **Step 1**: Convert the integer to a string.
- **Step 2**: Check if the string is a palindrome.
  - Compare the characters from the start and end of the string.
  - If they are not equal, return `false`.
  - If all characters are compared, return `true`.

## Complexity Analysis
- **Time Complexity**: O(n)
  - `n`: number of digits in the integer.
  - We need to compare each character of the string.
- **Space Complexity**: - O(n)
  - `n`: number of digits in the integer.
  - We need to store the string representation of the integer.

## Edge Cases
No edge cases are considered for this problem.

## Additional Notes
- Avoid checking if the number is negative or contains only one digit.
