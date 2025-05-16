# Employees Earning More Than Their Managers

## Problem Statement
Table: Employee
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| name        | varchar |
| salary      | int     |
| managerId   | int     |
+-------------+---------+
id is the primary key (column with unique values) for this table.
Each row of this table indicates the ID of an employee, their name, salary, and the ID of their manager.

Write a solution to find the employees who earn more than their managers.

**For the full problem statement, examples, and constraints, visit:**
[LeetCode Problem Link](https://leetcode.com/problems/employees-earning-more-than-their-managers/description/)

## Approach
For each row:
  - Check if `managerID` is NULL, so it's not an employee no need to check salaries.
  - If `managersID` is not NULL, we compare the employee's salary with their manager's.

**How To check the manager of each employee?**
  - Using a subquery to find the salary of the manager of that specific employee (`managerID` = `id`).
