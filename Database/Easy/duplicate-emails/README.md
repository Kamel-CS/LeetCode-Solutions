# Duplicate Emails

## Problem Statement
Table: Person
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| email       | varchar |
+-------------+---------+
id is the primary key (column with unique values) for this table.
Each row of this table contains an email. The emails will not contain uppercase letters.

Write a solution to report all the duplicate emails. Note that it's guaranteed that the email field is not NULL.

Return the result table in any order.

**For the full problem statement, examples, and constraints, visit:**
[LeetCode Problem Link](https://leetcode.com/problems/duplicate-emails/description/)

## Approach
First, group persons by email using `GROUP BY` i.e., group all rows that have the same value in the specified column.
Then, use the aggregate function `COUNT()` on each of the groups to count the number of elements (persons).
If `COUNT()` returns a value bigger than 1, then the email is duplicated.
